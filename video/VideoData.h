//
// Created by beloin on 31/05/2022.
//

#ifndef PRIVATE_CLASS_VIDEODATA_H
#define PRIVATE_CLASS_VIDEODATA_H

#include "string"

using namespace std;

class VideoData {
private:
    const int width;
    const  int height;
    const string name;
    const string url;
    const float size; // Size in megabytes


    friend class VideoInterface;

public:
    VideoData(int width, int height, const string &name, const string &url, float size);

};


#endif //PRIVATE_CLASS_VIDEODATA_H
