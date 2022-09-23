#include <iostream>
#include<vector>
#include<algorithm>
#include<stdint.h>
#include  "../../dlib/dlib/image_processing.h"
#include "../../dlib/dlib/data_io.h"
#include "../opencv/modules/core/include/opencv2/core.hpp"
#include "../opencv/modules/core/include/opencv2/core/types_c.h"
#include "../opencv/modules/core/include/opencv2/core/core_c.h"
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
//     std::vector<std::vector<int>> shape(68,std::vector<int>(2));
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

               {
                  int x_coordinate=vec[0];
                    int y_coordinate=vec[1];
                   cv::circle(image_reader,cv::Point2d(x_coordinate,y_coordinate),2 ,cv::Scalar (0,0,255),-1);


                }

         }
            

      //cv::imshow("Image", image_reader);
      //cv::waitKey(0);

        


        typedef cv::Point_<int32_t> Points;
        std::vector<Points> left_point;
        std::vector<Points> right_point;
        for (int x: left)
        {
            left_point.push_back(Points(detected_object.part(x).x()));
            right_point.push_back(Points(detected_object.part(x).y()));
        }
        for(int y:right)
        {
            right_point.push_back(Points(detected_object.part(y).x()));
            right_point.push_back(Points(detected_object.part(y).y()));
        }

        std::cout<<left_point.size()<<right_point.size()<<std::endl;
        cv::Mat left_mask(image_reader.rows,image_reader.cols,0);
        cv::Mat right_mask(image_reader.rows,image_reader.cols,0);
        cv::fillConvexPoly(left_mask,left_point,cv::Scalar(255,255,255),0);
        cv::fillConvexPoly(right_mask,right,cv::Scalar(255,255,255),0);
        std::vector<int> pixel_data;
         for(int r = 0; r < image_reader.rows; ++r) {
         for(int c = 0; c < image_reader.cols; ++c) {
             cv::Vec3b color=image_reader.at<cv::Vec3b>(cv::Point(r,c));
             pixel_data.push_back((int) color[2]);


         }
     }

        std::cout<<"it is here"<<std::endl;
        cv::Mat r= cv::Mat(pixel_data).reshape(image_reader.rows,image_reader.cols);

        int left_threshold=40;
        int right_threshold=50;

        //cv2::threshold(r,left_threshold,255,cv2::THRESH_BINARY_INV);









        return 0;

 }

