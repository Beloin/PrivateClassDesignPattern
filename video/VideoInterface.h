//
// Created by beloin on 31/05/2022.
//

#ifndef PRIVATE_CLASS_VIDEOINTERFACE_H
#define PRIVATE_CLASS_VIDEOINTERFACE_H


#include "VideoData.h"
#include "vector"

class VideoInterface {
private:
    vector<VideoData*> videos;
    VideoData* currentVideo;
    string dataUrl;

public:
    void loadVideoData();
    vector<int> getAvailableResolutions();
    void setResolution(int resolution);
    float getCurrentVideoSize();
    int getCurrentVideoResolution();
    explicit VideoInterface(const string &dataUrl);
};


#endif //PRIVATE_CLASS_VIDEOINTERFACE_H
