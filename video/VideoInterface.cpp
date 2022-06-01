//
// Created by beloin on 31/05/2022.
//

#include "VideoInterface.h"
#include "VideoExternAPI.h"

vector<int> VideoInterface::getAvailableResolutions() {
    auto vector1 = vector<int>();

    for (int i = 0; i < this->videos.size(); i++) {
        vector1.push_back(videos.at(i)->height);
    }

    return vector1;
}

void VideoInterface::setResolution(int resolution) {
    for (int i= 0; i<=this->videos.size(); i++) {
        VideoData *&videoData = this->videos.at(i);
        if (videoData->height == resolution) {
            this->currentVideo = videoData;
        }
    }
}

float VideoInterface::getCurrentVideoSize() {
    return this->currentVideo->size;
}

int VideoInterface::getCurrentVideoResolution() {
    return this->currentVideo->height;
}

VideoInterface::VideoInterface(const string &dataUrl) : dataUrl(dataUrl) {}

void VideoInterface::loadVideoData() {
    this->videos = VideoExternAPI::getVideoData(this->dataUrl);
    this->currentVideo = this->videos.at(0);
}
