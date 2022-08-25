#ifndef PICTURECLUB_H
#define PICTURECLUB_H
#include<iostream>
#include"../opencv/include/opencv2/opencv.hpp"



class PictureClub
{
public:
    PictureClub(int argc, char * argv[]);
    ~PictureClub();

    void DetectFace(void);
    void DetectEyes(const cv::Rect&);
    void GrabImage(void);
    void GrabImage(const cv::Mat image);
    void cvtGray();

    const cv::Size &getProcessing_size() const;
    void setProcessing_size(const cv::Size &newProcessing_size);
    void ShowImage(void)
    {
        cv::imshow("Debug Show", capture_image);
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
