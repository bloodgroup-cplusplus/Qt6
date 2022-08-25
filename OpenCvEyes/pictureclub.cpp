#include "pictureclub.h"
const cv::Scalar C_GREEN(0,255,0);
const cv::Scalar C_RED (0,0,255);
const cv::Scalar C_VLUE(255,0,0);

PictureClub::PictureClub(int argc, char * argv[]):processing_size(640,480)
{

    capture_device = new cv::VideoCapture;
    const std::string  LENA_FNAME="/Users/bhushansharma/Programs/Qt6/opencv/samples/data/lena.jpg";

    const  cv::Mat sample_image=cv::imread(LENA_FNAME);

    cv::imshow("Sample Image", sample_image);

    cv::waitKey();


    GrabImage(sample_image);
    cvtGray();
    DetectFace();
    ShowImage();


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
void PictureClub::DetectFace()
{
    const std::string FACE_XML_FNAME ="/Users/bhushansharma/Programs/Qt6/opencv/data/haarcascades/haarcascade_frontalface_alt.xml";
    const std::string  EYES_XML_FNAME = "/Users/bhushansharma/Programs/Qt6/opencv/data/haarcascades/haarcascade_eye.xml";
    std::vector<cv::Rect> face_region;



    face_classifier.detectMultiScale(grayscaled_capture,face_region);


    std::for_each(face_region.begin(), face_region.end(),
                  [this] (const cv::Rect & fr){

        cv::rectangle(capture_image, fr,C_GREEN);
        this->DetectEyes(fr);


    });
}

// main method for eye detection

void PictureClub::DetectEyes(const cv::Rect &face_rect)
{
    cv::Mat  eye_region_image(grayscaled_capture,face_rect);
    std::vector<cv::Rect> eye_region;
    eyes_classifier.detectMultiScale(eye_region_image,eye_region);
    std::for_each(eye_region.begin(),eye_region.end(),
                  [this] (const cv::Rect &er)
    {
        cv::rectangle(capture_image,er,C_RED);

    });





}


void PictureClub::GrabImage(void)
{
    *capture_device >> capture_image;
}

void PictureClub::GrabImage(const cv::Mat image)
{

    capture_image = image.clone();
}
