#ifndef PICTURECLUB_H
#define PICTURECLUB_H
#include<iostream>
#include"../opencv/include/opencv2/opencv.hpp"



class PictureClub
{
    typedef std::vector<cv::Rect> Rect_vector;
public:
    PictureClub(int argc, char * argv[]);
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
    void ShowImage(const std::string wname = "Debug Show")

    {
        cv::imshow(wname, capture_image);
        cv::waitKey();
    }

private:
    cv::VideoCapture * capture_device;
    cv::Mat_<uint8_t> grayscaled_capture;
    cv::Mat capture_image;
    cv::Size processing_size;
    cv::CascadeClassifier face_classifier;
    cv::CascadeClassifier eyes_classifier;


};

#endif // PICTURECLUB_H
