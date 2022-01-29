FROM ubuntu:18.04

### build Open CV
RUN apt-get update \
    && apt-get install -y \
            python3.8 vim cmake gcc wget unzip git x11-apps \
            build-essential checkinstall pkg-config yasm \
    ### download source code
    && mkdir -p /opt/opencv && cd /opt/opencv \
    && git clone https://github.com/opencv/opencv.git -b 4.4.0 --depth 1 \
    ### dependency
    && apt-get -y install \
            python3-dev libeigen3-dev\
            libjpeg-dev libpng-dev \
            libavcodec-dev libavformat-dev libswscale-dev libv4l-dev \
            libatlas-base-dev libxvidcore-dev libx264-dev libgtk-3-dev \
            libboost-all-dev libboost-dev libglew-dev libssl-dev libgtk2.0-dev
    ### build
RUN cd /opt/opencv && mkdir build && cd build \
    && cmake \
        -DCMAKE_BUILD_TYPE=Release \
        #-DBUILD_DOCS=OFF \
        #-DBUILD_EXAMPLES=OFF \
        #-DBUILD_TESTS=OFF \
        ../opencv \
    && make -j1 \
    && make install \
    ### clean
    && apt-get autoremove -y \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
