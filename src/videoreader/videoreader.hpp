#ifndef VIDEOREADER_VIDEOREADER_H_
#define VIDEOREADER_VIDEOREADER_H_

#include <iostream>
#include <string>

#include <opencv2/highgui/highgui.hpp>

#include "../timer/timer.hpp"

const int MAX_FRAMES_TO_DROP = 10;

class VideoReader {
  public:
    VideoReader(std::string filename);
    cv::Mat getFrame();
    bool showFrame();

  private:
    cv::VideoCapture videoCapture;
    int framesCaptured;
    bool windowCreated;
    double avgFps;
};

#endif
