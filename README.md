# How to build Opencv C++ on Ubuntu
Everyone can install Opencv C++ follow as:

Step 1: Update the ubuntu system packages

  ```sudo apt-get update && sudo apt-get upgrade```

![Screenshot from 2021-05-23 22-59-15](https://user-images.githubusercontent.com/69961463/119267927-d134c480-bc1a-11eb-943d-ff200d94bc76.png)

Step 2: Install required tools and packages

  ```sudo apt-get install build-essential cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev```

![Screenshot from 2021-05-23 23-02-59](https://user-images.githubusercontent.com/69961463/119267976-0d682500-bc1b-11eb-88ca-c0808e1a75b4.png)

Step 3: Download Opencv sources using git

  ```sudo -s```

  ```cd /opt```

![Screenshot from 2021-05-23 23-04-18](https://user-images.githubusercontent.com/69961463/119268031-3be60000-bc1b-11eb-8be8-1c88223555bb.png)

  ```git clone https://github.com/Itseez/opencv.git```

  ```git clone https://github.com/Itseez/opencv_contrib.git```

![Screenshot from 2021-05-23 23-10-23](https://user-images.githubusercontent.com/69961463/119268199-19081b80-bc1c-11eb-953b-f42375aa021b.png)

Step 4: Building and Install OpenCv

  ```cd opencv``` 

  ```mkdir release```

  ```cd release```

![Screenshot from 2021-05-23 23-11-44](https://user-images.githubusercontent.com/69961463/119268243-4785f680-bc1c-11eb-8790-402af9f7a621.png)

  ```cmake -D BUILD_TIFF=ON -D WITH_CUDA=OFF -D ENABLE_AVX=OFF -D WITH_OPENGL=OFF -D WITH_OPENCL=OFF -D WITH_IPP=OFF -D WITH_TBB=ON -D BUILD_TBB=ON -D WITH_EIGEN=OFF -D WITH_V4L=OFF -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D OPENCV_GENERATE_PKGCONFIG=ON -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH=/opt/opencv_contrib/modules /opt/opencv/```

![Screenshot from 2021-05-23 23-13-38](https://user-images.githubusercontent.com/69961463/119268312-8fa51900-bc1c-11eb-8414-d49cd8e2c76f.png)

![Screenshot from 2021-05-23 23-14-27](https://user-images.githubusercontent.com/69961463/119268333-a8adca00-bc1c-11eb-8f7b-10be5396882f.png)

  ```make -j4```
  
![Screenshot from 2021-05-23 23-27-30](https://user-images.githubusercontent.com/69961463/119268734-78ffc180-bc1e-11eb-95f8-7aa930c0f620.png)

![Screenshot from 2021-05-23 23-28-09](https://user-images.githubusercontent.com/69961463/119268752-8c129180-bc1e-11eb-91c6-9ff59b470010.png)

  ```make install```

![Screenshot from 2021-05-23 23-28-49](https://user-images.githubusercontent.com/69961463/119268774-a6e50600-bc1e-11eb-9789-24f474eb3dff.png)

![Screenshot from 2021-05-23 23-29-26](https://user-images.githubusercontent.com/69961463/119268800-be23f380-bc1e-11eb-8e05-23b04ffd9884.png)

  ```ldconfig```

  ```exit```

  ```cd ~```
  
![Screenshot from 2021-05-23 23-31-06](https://user-images.githubusercontent.com/69961463/119268849-f62b3680-bc1e-11eb-8b6e-f511ff51401e.png)

Step 5: Find and Set "opencv.pc" file path
  
  ```ls /usr/local/lib/pkgconfig/```

  ```sudo cp /usr/local/lib/pkgconfig/opencv4.pc  /usr/lib/x86_64-linux-gnu/pkgconfig/opencv.pc```

![Screenshot from 2021-05-23 23-32-20](https://user-images.githubusercontent.com/69961463/119268891-2d99e300-bc1f-11eb-8028-ebc38d98472e.png)


Step 6: Check Opencv version

  ```pkg-config --modversion opencv```
  
![Screenshot from 2021-05-23 23-33-21](https://user-images.githubusercontent.com/69961463/119268928-486c5780-bc1f-11eb-8dec-a6028945cf36.png)


Step 7: Compile and run test.cpp

- Compile code:

  ``` g++ test.cpp -o test -std=c++11 `pkg-config --cflags --libs opencv` ```
  
- Execute code:

  `./test`
