#include <iostream>
#include <sstream>

#include "app.h"

int main( int argc, char* argv[] )
{
    try{
        Kinect kinect;
        kinect.run();
    } catch( std::exception& ex ){
        std::cout << ex.what() << std::endl;
    }
	
    return 0;
}

private void Button_click_1(object sensor, RoutedEventArgs e) {
	int Count = KinectSensor.KinectSensors.Count;
	txtblk.Text = Count.ToString("����� Ű��Ʈ ������ 1���Դϴ�.");
}