#include <iostream>
#include <cstdlib>
#include <stdio.h>

//OpenCV libraries//
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
	system("cd ~/mmal"); //make sure you start in the proper directory	
	//cv::VideoCapture vcap;
	//cv::Mat image;
	//string videoStreamAddress = "http://192.168.:8081/";
	
	char c;
	
	while (c != 'q')
	{
		cout << "Enter 'y' to start the camera\n Enter 'n' to stop the camera\n Enter q to quit: ";
		cin >> c;
		switch (c)
		{
		case 'y':
			system("cd ~/mmal; ./startcam");
			
			//open the video stream and make sure it's opened
			/*if (!vcap.open(videoStreamAddress)) {
				std::cout << "Error opening video stream or file" << std::endl;
				return -1;
			}
			for (;;) {
				if (!vcap.read(image)) {
					std::cout << "No frame" << std::endl;
					cv::waitKey();
				}
				cv::imshow("Output Window", image);
				if (cv::waitKey(1) >= 0) break;
			}   */
			break;
			
		case 'n':
			system("cd ~/mmal; ./stopcam");
			break;
			
		default:
			break;
		}
	}
	system("cd ~/mmal; ./stopcam"); //make sure to turn camera off after session.
	return 0;
}