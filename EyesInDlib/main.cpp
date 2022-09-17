#include <iostream>
#include<vector>

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


//using namespace std;
//using namespace dlib;

// The contents of this file are in the public domain. See LICENSE_FOR_EXAMPLE_PROGRAMS.txt
/*

    This example program shows how to use dlib's implementation of the paper:
        One Millisecond Face Alignment with an Ensemble of Regression Trees by
        Vahid Kazemi and Josephine Sullivan, CVPR 2014

    In particular, we will train a face landmarking model based on a small dataset
    and then evaluate it.  If you want to visualize the output of the trained
    model on some images then you can run the face_landmark_detection_ex.cpp
    example program with sp.dat as the input model.

    It should also be noted that this kind of model, while often used for face
    landmarking, is quite general and can be used for a variety of shape
    prediction tasks.  But here we demonstrate it only on a simple face
    landmarking task.
*/



// ----------------------------------------------------------------------------------------

//std::vector<std::vector<double> > get_interocular_distances (
 //   const std::vector<std::vector<dlib::full_object_detection> >& objects
//);
/*!
    ensures
        - returns an object D such that:
            - D[i][j] == the distance, in pixels, between the eyes for the face represented
              by objects[i][j].
!*/

// ----------------------------------------------------------------------------------------
/*void shape_to_vector(std::vector<std::vector<int>> shapes,dlib::full_object_detection detected_object)
{
    for (int i =0;i<68;++i)
    {
         std::vector<int> v1;
        v1.push_back(detected_object.part(i).x());
        std::cout<<detected_object.part(i).x()<<std::endl;
         std::cout<<detected_object.part(i).y()<<std::endl;
         v1.push_back(detected_object.part(i).y());
        shapes.push_back(v1);
    }
}
*/



 int main(int argc, char** argv)
{
     //cv::VideoCapture cap(1);
    // cv::namedWindow("Image", cv::WINDOW_AUTOSIZE);
     std::string image="/Users/bhushansharma/Programs/Qt6/EyesInDlib/image.png";
     cv::Mat image_reader=cv::imread(image);
     cv::Mat gray;
     //cv::imshow("image",image_reader);
     //cv::waitKey(0);
     dlib::frontal_face_detector detector=dlib::get_frontal_face_detector();
     dlib::shape_predictor sp;
     std::stringstream landmarksstream;
     landmarksstream.write((const char *) shape_predictor_68_face_landmarks_dat,shape_predictor_68_face_landmarks_dat_len);
     deserialize(sp,landmarksstream);
     //dlib::shape_predictor predictor=dlib::shape_predictor();
     std::vector<dlib::rectangle>  rectangle_in_images;
     dlib::full_object_detection detected_object=dlib::full_object_detection() ;
     std::vector<std::vector<int>> shape(68,std::vector<int>(2));

     //while(1)
    // {
         //cap.read(image_reader);
         cv::cvtColor(image_reader,gray,cv::COLOR_BGR2GRAY);
          image_reader=cv::imread(image);
        dlib::array2d<dlib::bgr_pixel> dlibFrame;
         dlib::assign_image(dlibFrame,dlib::cv_image<dlib::bgr_pixel>(image_reader));        rectangle_in_images= detector(dlibFrame);
        for (dlib::rectangle rect: rectangle_in_images)
        {

                detected_object= sp(dlibFrame,rect);
                for(int i=0;i<=68;++i)
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
                    //std::cout<<x_coordinate<<std::endl;
                    //std::cout<<y_coordinate<<std::endl;
                   cv::circle(image_reader,cv::Point2d(x_coordinate,y_coordinate),2 ,cv::Scalar (0,0,255),-1);

                //}

                }

               }
            

       //cv::imshow("Image", image_reader);
       //cv::waitKey(0);

        

        std::vector<int> left = {36,37,38,39,40,41}; // keypoint indices for left eye
        std::vector<int> right = {42,43,44,45,46,47}; // keypoint indices for right ey
        cv::Mat left_mask(image_reader.rows,image_reader.cols,0);
        cv::Mat right_mask(image_reader.rows,image_reader.cols,0);
        std::cout<<"It hasn't crashed yet"<<std::endl;
        cv::fillConvexPoly(left_mask,left,cv::Scalar(255,255,255));
        std::cout<<"I thought it would crash here"<<std::endl;
        cv::fillConvexPoly(right_mask,right,cv::Scalar(255,255,255));

        int left_threshold=40;
        int right_threshold=50;

        //cv::Mat r = cv::Mat(image_reader,cv::Rect();
        cv::Mat2d r;
        for(int i=0;i<image_reader.rows; i++)
        {
            for(int j=0;j<image_reader.cols; j++)
            {
                        std::cout<<image_reader.at<uchar>(i,j)<<std::endl;
            }

        }



        





        return 0;

 }
 /*   try
    {
        // In this example we are going to train a shape_predictor based on the
        // small faces dataset in the examples/faces directory.  So the first
        // thing we do is load that dataset.  This means you need to supply the
        // path to this faces folder as a command line argument so we will know
        // where it is.
        if (argc != 2)
        {
            cout << "Give the path to the examples/faces directory as the argument to this" << endl;
            cout << "program.  For example, if you are in the examples folder then execute " << endl;
            cout << "this program by running: " << endl;
            cout << "   ./train_shape_predictor_ex faces" << endl;
            cout << endl;
            return 0;
        }
        const std::string faces_directory = argv[1];
        // The faces directory contains a training dataset and a separate
        // testing dataset.  The training data consists of 4 images, each
        // annotated with rectangles that bound each human face along with 68
        // face landmarks on each face.  The idea is to use this training data
        // to learn to identify the position of landmarks on human faces in new
        // images.
        //
        // Once you have trained a shape_predictor it is always ant to
        // test it on data it wasn't trained on.  Therefore, we will also load
        // a separate testing set of 5 images.  Once we have a shape_predictor
        // created from the training data we will see how well it works by
        // running it on the testing images.
        //
        // So here we create the variables that will hold our dataset.
        // images_train will hold the 4 training images and faces_train holds
        // the locations and poses of each face in the training images.  So for
        // example, the image images_train[0] has the faces given by the
        // full_object_detections in faces_train[0].
        dlib::array<array2d<unsigned char> > images_train, images_test;
        std::vector<std::vector<full_object_detection> > faces_train, faces_test;

        // Now we load the data.  These XML files list the images in each // dataset and also contain the positions of the face boxes and
        // landmarks (called parts in the XML file).  Obviously you can use any
        // kind of input format you like so long as you store the data into
        // images_train and faces_train.  But for convenience dlib comes with
        // tools for creating and loading XML image dataset files.  Here you see
        // how to load the data.  To create the XML files you can use the imglab
        // tool which can be found in the tools/imglab folder.  It is a simple
        // graphical tool for labeling objects in images.  To see how to use it
        // read the tools/imglab/README.txt file.
        load_image_dataset(images_train, faces_train, faces_directory+"/training_with_face_landmarks.xml");
        load_image_dataset(images_test, faces_test, faces_directory+"/testing_with_face_landmarks.xml");

        // Now make the object responsible for training the model.
        shape_predictor_trainer trainer;
        // This algorithm has a bunch of parameters you can mess with.  The
        // documentation for the shape_predictor_trainer explains all of them.
        // You should also read Kazemi's paper which explains all the parameters
        // in great detail.  However, here I'm just setting three of them
        // differently than their default values.  I'm doing this because we
        // have a very small dataset.  In particular, setting the oversampling
        // to a high amount (300) effectively boosts the training set size, so
        // that helps this example.
        trainer.set_oversampling_amount(300);
        // I'm also reducing the capacity of the model by explicitly increasing
        // the regularization (making nu smaller) and by using trees with
        // smaller depths.
        trainer.set_nu(0.05);
        trainer.set_tree_depth(2);

        // some parts of training process can be parallelized.
        // Trainer will use this count of threads when possible
        trainer.set_num_threads(2);

        // Tell the trainer to print status messages to the console so we can
        // see how long the training will take.
        trainer.be_verbose();

        // Now finally generate the shape model
        shape_predictor sp = trainer.train(images_train, faces_train);


        // Now that we have a model we can test it.  This function measures the
        // average distance between a face landmark output by the
        // shape_predictor and where it should be according to the truth data.
        // Note that there is an optional 4th argument that lets us rescale the
        // distances.  Here we are causing the output to scale each face's
        // distances by the interocular distance, as is customary when
        // evaluating face landmarking systems.
        cout << "mean training error: "<<
            test_shape_predictor(sp, images_train, faces_train, get_interocular_distances(faces_train)) << endl;

        // The real test is to see how well it does on data it wasn't trained
        // on.  We trained it on a very small dataset so the accuracy is not
        // extremely high, but it's still doing quite good.  Moreover, if you
        // train it on one of the large face landmarking datasets you will
        // obtain state-of-the-art results, as shown in the Kazemi paper.
        cout << "mean testing error:  "<<
            test_shape_predictor(sp, images_test, faces_test, get_interocular_distances(faces_test)) << endl;

        // Finally, we save the model to disk so we can use it later.
        serialize("sp.dat") << sp;
    }
    catch (exception& e)
    {
        cout << "\nexception thrown!" << endl;
        cout << e.what() << endl;
    }
}

// ----------------------------------------------------------------------------------------

double interocular_distance (
    const full_object_detection& det
)
{
    dlib::vector<double,2> l, r;
    double cnt = 0;
    // Find the center of the left eye by averaging the points around
    // the eye.
    for (unsigned long i = 36; i <= 41; ++i)
    {
        l += det.part(i);
        ++cnt;
    }
    l /= cnt;

    // Find the center of the right eye by averaging the points around
    // the eye.
    cnt = 0;
    for (unsigned long i = 42; i <= 47; ++i)
    {
        r += det.part(i);
        ++cnt;
    }
    r /= cnt;

    // Now return the distance between the centers of the eyes
    return length(l-r);
}

std::vector<std::vector<double> > get_interocular_distances (
    const std::vector<std::vector<full_object_detection> >& objects
)
{
    std::vector<std::vector<double> > temp(objects.size());
    for (unsigned long i = 0; i < objects.size(); ++i)
    {
        for (unsigned long j = 0; j < objects[i].size(); ++j)
        {
            temp[i].push_back(interocular_distance(objects[i][j]));
        }
    }
    return temp;
}

// ----------------------------------------------------------------------------------------




*/

