//
// Created by beloin on 31/05/2022.
//

#ifndef PRIVATE_CLASS_VIDEOEXTERNAPI_H
#define PRIVATE_CLASS_VIDEOEXTERNAPI_H


#include "VideoData.h"
#include "vector"

class VideoExternAPI {
public:
    static vector<VideoData *> getVideoData(string dataUrl);

};


#endif //PRIVATE_CLASS_VIDEOEXTERNAPI_H
