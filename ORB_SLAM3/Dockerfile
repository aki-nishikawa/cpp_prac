FROM ubuntu:18.04

### build Open CV
RUN apt-get update \
    && apt-get install -y \
            python3.8 vim cmake gcc wget unzip git \
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
            libboost-all-dev libboost-dev libglew-dev libssl-dev libgtk2.0-dev \
    ### build
    && mkdir build && cd build \
    && cmake \
        -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_DOCS=OFF \
        -DBUILD_EXAMPLES=OFF \
        -DBUILD_TESTS=OFF \
        ../opencv \
    && make -j \
    && make install

### build Pangolin
RUN cd /opt \
    && git clone --recursive https://github.com/stevenlovegrove/Pangolin.git \
    && cd Pangolin \
    && sed -ie '$d' ./scripts/install_prerequisites.sh \
    && sed -ie '$ a $MANAGER -y ${PKGS_OPTIONS[*]} ${PACKAGES[*]}' ./scripts/install_prerequisites.sh \
    && ./scripts/install_prerequisites.sh recommended \
    && mkdir build && cd build \
    && cmake \
        -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_EXAMPLES=OFF \
        .. \
    && make -j \
    && make install

### build ORB_SLAM3
RUN cd /opt \
    && apt install -y x11-apps \
    && git clone https://github.com/UZ-SLAMLab/ORB_SLAM3.git ORB_SLAM3 \
    && cd ORB_SLAM3 \
    && chmod +x build.sh \
    && ./build.sh
