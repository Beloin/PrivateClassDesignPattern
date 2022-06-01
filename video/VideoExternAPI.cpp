//
// Created by beloin on 31/05/2022.
//

#include "VideoExternAPI.h"
#include "iostream"

using namespace std;

vector<VideoData *> VideoExternAPI::getVideoData(string dataUrl) {
    cout << "Getting Data from: " << dataUrl << endl;
    auto vArray = vector<VideoData*>();
    vArray.push_back(new VideoData(1920, 1080,"Javascript Is Bad", "http://ec2-123456:9090/utf-09", 450.2));
    vArray.push_back(new VideoData(640, 350,"Javascript is More or Less", "http://ec2-123456:9090/utf-02", 12.2));
    vArray.push_back(new VideoData(2560, 1600,"27 Years Since 2022", "http://ec2-123456:9090/utf-02/hls.m3u8", 1220.9));
    vArray.push_back(new VideoData(3000, 2000,"That's Ok", "http://ec2-123456:9090/utf-78/hls.m3u8", 1500.9));
    return vArray;
}
