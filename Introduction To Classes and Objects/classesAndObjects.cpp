#include <iostream>
#include <list>

using namespace std;

    // Making a class for YouTube channel

    class YoutubeChannel {
        public:
        string Name;
        string ownerName;
        int subscribersCount;
        list <string> PublishedVideosTitle;


    };


int main (){

    YoutubeChannel myChannel;
    myChannel.Name = "Code Beauty";
    myChannel.ownerName = "Saldina";
    myChannel.subscribersCount = 1800;
    myChannel.PublishedVideosTitle = {"C++ for beginners", "HTML & CSS", "C++ OOP"};


    cout << "Channel Name: " << myChannel.Name << endl;
    cout << "Owner Name: " << myChannel.ownerName << endl;
    cout << "Subscribers: " << myChannel.subscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle : myChannel.PublishedVideosTitle){
        cout << videoTitle << endl;
    }





    return 0;
}