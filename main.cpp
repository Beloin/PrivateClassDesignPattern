//
// Created by beloin on 31/05/2022.
//

#include "video/VideoInterface.h"
#include "iostream"

using namespace std;

int main() {
    auto videoInterface = new VideoInterface("https://localhost:9090/videos/1/data");

    cout << "Retrieving data from Video URL" << endl;
    // Load all Video Data
    videoInterface->loadVideoData();

    cout << "Get all video resolution: ";
    auto res = videoInterface->getAvailableResolutions();
    for (auto cRes: res) {
        cout << cRes << " ";
    }
    cout << endl;

    cout << "Current Resolution: " << videoInterface->getCurrentVideoResolution() << endl;
    cout << "Current Size: " << videoInterface->getCurrentVideoSize() << endl;
    return 0;
}