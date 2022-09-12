#ifndef PICTURECLUB_H
#define PICTURECLUB_H
#include<iostream>
#include"../opencv/include/opencv2/opencv.hpp"
#include<ApplicationServices/ApplicationServices.h>


//'/System/Library/Frameworks/ApplicationServices.framework'




CGPoint mypoint = CGPoint(34,342);
typedef uint32_t CGDirectDisplayID;
CGDirectDisplayID display_id = CGMainDisplayID();
CGDisplayMoveCursorToPoint(display_id,myPoint);

class PictureClub
{

    typedef std::vector<cv::Rect> Rect_vector;
public:
    PictureClub();
    ~PictureClub();

    // Detect face
    // ret std::vector of cv::Rect

   Rect_vector  DetectFace(void);


    // detect eyes
    //return std::vector of cv::REct
    Rect_vector DetectEyes(const cv::Rect&);
    //Enlarge supplied region
    //ret :None
    void GrabImage(void);
    void GrabImage(const cv::Mat image);
    void cvtGray();
    void EnlargeRects( const cv::Rect &);

    const cv::Size &getProcessing_size() const;
    void setProcessing_size(const cv::Size &newProcessing_size);
    void ShowImage(const std::string wname = "DebugShow")
    {
        cv::imshow(wname, capture_image);

        cv::waitKey();
    }


private:
    cv::VideoCapture * capture_device;
    cv::Mat grayscaled_capture;
    cv::Mat capture_image;
    cv::Size processing_size;
    cv::CascadeClassifier face_classifier;
    cv::CascadeClassifier eyes_classifier;


};

#endif // PICTURECLUB_H
