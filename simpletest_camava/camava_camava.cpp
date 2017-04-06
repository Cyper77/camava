
/**
*/
#include <ctime>
#include <fstream>
#include <iostream>
#include <unistd.h>
#include <camava/camava.h>
using namespace std;

int main ( int argc,char **argv ) {
    camava::CamAva Camera; //Cmaera object
    //Open camera 
    cout<<"Opening Camera..."<<endl;
    if ( !Camera.open()) {cerr<<"Error opening camera"<<endl;return -1;}
    //wait a while until camera stabilizes
    cout<<"Sleeping for 3 secs"<<endl;
    usleep(3*1000000);
    //capture
    Camera.grab();
    //allocate memory
    unsigned char *data=new unsigned char[  Camera.getImageTypeSize ( camava::CAMAVA_FORMAT_RGB )];
    //extract the image in rgb format
    Camera.retrieve ( data,camava::CAMAVA_FORMAT_RGB );//get camera image
    //save
    std::ofstream outFile ( "camava_image.ppm",std::ios::binary );
    outFile<<"P6\n"<<Camera.getWidth() <<" "<<Camera.getHeight() <<" 255\n";
    outFile.write ( ( char* ) data, Camera.getImageTypeSize ( camava::CAMAVA_FORMAT_RGB ) );
    cout<<"Image saved at camava_image.ppm"<<endl;
    //free resrources    
    delete data;
    return 0;
}
//
