#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>

// Image struct which contains default image constructors and variables
struct Image {
  public:
    // Constructors
    Image();
    Image(const std::string filename);
    Image(const Image &source);
    Image &operator=(const Image &source);
    Image(Image &&source);
    Image &operator=(Image &&source);
    ~Image();
    
    // Variables
    cv::Mat _image{};
    std::string _imagePath{};
    int _width{};
    int _height{};
    int _channels{};
};
#endif