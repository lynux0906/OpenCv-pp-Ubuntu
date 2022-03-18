#include<iostream>
#include<opencv/opencv/hpp>

int main(int argc, char* argv){
  cv::Mat img;
  img = cv::imread('lena.jpg', cv::IMREAD_COLOR);
  
  if(!img.data){
    std::cout << "Image not found" << std::endl;
    return -1;
  }
  
  cv::imshow("Lena", img);
  cv::waitKey(0);
  cv::destroyAllWindows();
}
