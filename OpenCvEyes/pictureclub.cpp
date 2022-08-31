#include "pictureclub.h"
const cv::Scalar C_GREEN(0,255,0);
const cv::Scalar C_RED (0,0,255);
const cv::Scalar C_VLUE(255,0,0);

PictureClub::PictureClub():processing_size(640,480)
{

    capture_device = new cv::VideoCapture;
    const std::string  LENA_FNAME="/Users/bhushansharma/Programs/Qt6/opencv/samples/data/lena.jpg";

    const  cv::Mat sample_image=cv::imread(LENA_FNAME);

    if(sample_image.empty())
    {
        std::cout<<"Image not successfully loaded !"<<std::endl;
    }
    std::cout<<"Its working upto here "<<std::endl;
    cv::namedWindow("Image ", cv::WINDOW_AUTOSIZE);


   while(1)
    {
    cv::imshow("Image", sample_image);
    GrabImage(sample_image);
    cvtGray();
    auto faces = DetectFace();
    /*auto eyes = DetectEyes(faces[0]);
    eyes[0].x+= faces[0].x;
    eyes[0].y+= faces[0].y;
    ShowImage("Original");
    EnlargeRects(eyes[0]);
    ShowImage("Enlarged");*/
    cv::waitKey(0);
    }
}


void PictureClub::cvtGray()
{
    cv::cvtColor(capture_image, grayscaled_capture,cv::ColorConversionCodes::COLOR_BGR2GRAY);

}


PictureClub::~PictureClub()
{
    delete capture_device;

}
// main method for face detection
PictureClub::Rect_vector PictureClub::DetectFace()
{
   // const std::string FACE_XML_FNAME ="/Users/bhushansharma/Programs/Qt6/opencv/data/haarcascades/haarcascade_frontalface_alt.xml";
    cv::CascadeClassifier faceCascade;
    faceCascade.load("/Users/bhushansharma/Programs/Qt6/opencv/data/haarcascades/haarcascade_frontalface_alt.xml");
    if(faceCascade.empty()) std::cout<<"Xml file for face is not loaded"<<std::endl;
    cv::CascadeClassifier eyeCascade;
    eyeCascade.load( "/Users/bhushansharma/Programs/Qt6/opencv/data/haarcascades/haarcascade_eye.xml");
    if(eyeCascade.empty())std::cout<<"Xml file for eyes is not loaded"<<std::endl;
    std::vector<cv::Rect> face_region;

    faceCascade.detectMultiScale(grayscaled_capture,face_region);

    std::for_each(face_region.begin(), face_region.end(),
                  [this] (const cv::Rect & fr){

        cv::rectangle(capture_image, fr,C_GREEN);
        //this->DetectEyes(fr);


    });
    return face_region;
}


void PictureClub::EnlargeRects(const cv::Rect& rect)
{
    cv::Mat_<cv::Vec3b> roi_image(capture_image,rect);
   const cv::Point2i roi_origin(rect.x,rect.y);


    cv::Point2d center(
                rect.x + rect.width*0.5,
                rect.y+rect.height*0.5);

      double kernel_radius = std::min(rect.width, rect.height) *0.5;

    cv::Mat_<cv::Point2f> differential_kernel(rect.size());
    cv::Mat_<cv::Vec3b> original_image = roi_image.clone();


    for(int r = 0; r< differential_kernel.rows;++r)
    {
        for(int c= 0; c<differential_kernel.cols;++c)
        {
            cv::Point2f diff( c-rect.width * 0.5, r -rect.width * 0.5);
            auto &p = differential_kernel(r,c);
            const float distance = sqrt(diff.dot(diff));

            if(distance< kernel_radius)
            {
                double rho_differential = (1 -cos(distance/kernel_radius*2 *3.142))*3;

                p = -diff  * (rho_differential/kernel_radius);

            }
            else
            {
                p *= 0;
            }
            roi_image(r,c) = original_image(r+ p.y ,c + p.x);



        }
    }






}

// main method for eye detection

PictureClub::Rect_vector PictureClub::DetectEyes(const cv::Rect &face_rect)
{
    cv::Mat  eye_region_image(grayscaled_capture,face_rect);
    std::vector<cv::Rect> eye_region;
    eyes_classifier.detectMultiScale(eye_region_image,eye_region);


    cv::Point2i   offset;
    offset.x = face_rect.x;
    offset.y = face_rect.y;

    std::for_each(eye_region.begin(),eye_region.end(),
                  [&] (const cv::Rect &er)
    {
        cv::Rect  absolute_er(er); {
            absolute_er.x +=  offset.x;
            absolute_er.y+= offset.y;

        }

        cv::rectangle(capture_image,absolute_er,C_RED);

    });

    return eye_region;

}


void PictureClub::GrabImage(void)
{
    *capture_device >> capture_image;
}

void PictureClub::GrabImage(const cv::Mat image)
{

    capture_image = image.clone();
}
