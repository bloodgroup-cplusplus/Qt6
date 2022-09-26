#include <iostream>
#include<vector>
#include<algorithm>
#include<stdint.h>
#include  "../../dlib/dlib/image_processing.h"
#include "../../dlib/dlib/data_io.h"
#include "../opencv/modules/core/include/opencv2/core.hpp"
#include "../opencv/modules/core/include/opencv2/core/types_c.h"
#include "../opencv/modules/core/include/opencv2/core/core_c.h"
#include "../opencv/modules/imgproc/include/opencv2/imgproc.hpp"
#include "../opencv/include/opencv2/opencv.hpp"
#include "../../dlib/dlib/image_processing.h"
#include "../../dlib/dlib/image_processing/frontal_face_detector.h"
#include"../../dlib/dlib/image_processing/shape_predictor.h"
#include "../../dlib/dlib/opencv/cv_image.h"
#include "../../dlib/dlib/opencv/to_open_cv_abstract.h"
#include"../../dlib/shape_predictor_68_face_landmarks.hpp"
 int main(int argc, char** argv)
{
     //cv::VideoCapture cap(1);
     std::string image="/Users/bhushansharma/Programs/Qt6/EyesInDlib/image.png";


     cv::Mat image_reader=cv::imread(image); 
     cv::Mat gray;
     dlib::frontal_face_detector detector=dlib::get_frontal_face_detector();
    dlib::shape_predictor sp;
    std::stringstream landmarksstream;
     landmarksstream.write((const char *) shape_predictor_68_face_landmarks_dat,shape_predictor_68_face_landmarks_dat_len);
     deserialize(sp,landmarksstream);
     dlib::shape_predictor predictor=dlib::shape_predictor();
     std::vector<dlib::rectangle>  rectangle_in_images;
     dlib::full_object_detection detected_object=dlib::full_object_detection() ;
     std::vector<int32_t> left = {36,37,38,39,40,41}; // keypoint indices for left eye
     std::vector<int32_t> right = {42,43,44,45,46,47}; // keypoint indices for right ey
     std::vector<std::vector<int>> shape;

         //cap.read(image_reader);
         cv::cvtColor(image_reader,gray,cv::COLOR_BGR2GRAY);
          image_reader=cv::imread(image);
        dlib::array2d<dlib::bgr_pixel> dlibFrame;
         dlib::assign_image(dlibFrame,dlib::cv_image<dlib::bgr_pixel>(image_reader));
         rectangle_in_images= detector(dlibFrame);
        for (dlib::rectangle rect: rectangle_in_images)
        {

                detected_object= sp(dlibFrame,rect);
                for(int i=0;i<68;++i)
                {
                    std::vector<int> v1;
                    v1.push_back(detected_object.part(i).x());
                    v1.push_back(detected_object.part(i).y());
                    shape.push_back(v1);

                }

                std::cout<<shape.size()<<std::endl;
              for(std::vector<int> vec:shape)
                //for(cv::Point2i  m:shape)


               {
                  int x_coordinate=vec[0];

                    int y_coordinate=vec[1];
                   cv::circle(image_reader,cv::Point2d(x_coordinate,y_coordinate),2 ,cv::Scalar (0,0,255),-1);




                }

         }
            

 //     cv::imshow("Image", image_reader);
  //    cv::waitKey(0);

        


        std::vector<cv::Point2i> left_point;
        std::vector<cv::Point2i> right_point;
        for (int x: left)
        {
            left_point.push_back(cv::Point2i(detected_object.part(x).x(),detected_object.part(x).y()));
        }
        for(int y:right)
        {
            right_point.push_back(cv::Point2i(detected_object.part(y).x(),detected_object.part(y).y()));
        }


        cv::Mat mask=cv::Mat::zeros(image_reader.rows,image_reader.cols,30);
        cv::fillConvexPoly(mask,left_point,cv::Scalar(255,255,255),0);
        cv::fillConvexPoly(mask,right_point,cv::Scalar(255,255,255),0);
        //cv::Mat kernel = cv::Mat(9,9,30,1);
        //int niters=5;
        //cv::Mat kernel = cv::getStructuringElement()

        //cv::dilate(mask,mask,kernel,cv::Point(-1,-1),niters);

       std::vector<std::vector<double>> pixel_data;
         for(int r = 0; r < image_reader.rows; ++r) {
             std::vector<double> v1;
         for(int c = 0; c < image_reader.cols; ++c) {
             cv::Vec3b color=image_reader.at<cv::Vec3b>(cv::Point(r,c));
             v1.push_back((int) color[2]);
         }
         pixel_data.push_back(v1);
     }






        cv::Mat r=cv::Mat(image_reader.rows,image_reader.cols,30);
        for(int i=0;i<image_reader.rows; i++)
        {
            for(int j=0;j<image_reader.cols;j++)
            {
                r.at<double>(i,j) =pixel_data.at(i).at(j);
            }
        }
        std::cout<<r<<std::endl;
        /*
        //cv::Mat r_out = cv::Mat(pixel_data).reshape(image_reader.rows,image_reader.cols);
        cv::Mat r_out_left=cv::Mat::zeros(image_reader.rows,image_reader.cols,30);
        cv::Mat r_out_right =cv::Mat::zeros(image_reader.rows,image_reader.cols,30);
        int left_threshold=40;
        int right_threshold=50;
        //cv::threshold(r,left_threshold,255,cv2::THRESH_BINARY_INV);
       // std::vector<int> left_threshold;
        //cv::Mat left_thre=cv::Mat(left_threshold).reshape(image_reader.rows,image_reader.cols);
         cv::threshold(r,r_out_left,left_threshold,255,cv::THRESH_BINARY_INV);
         cv::threshold(r,r_out_right,right_threshold,255,cv::THRESH_BINARY_INV);

         //std::cout<<r_out.rows<<r_out.cols<<std::endl;
         cv::Mat element =cv::getStructuringElement(cv::MORPH_ELLIPSE,cv::Point(4,4));
         //cv::Mat dilated;
         //cv::dilate(r_out, dilated, element);




      // cv::dilate()

*/
        return 0;
 }

