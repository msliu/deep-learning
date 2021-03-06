FROM nvidia/cuda:10.0-cudnn7-devel-ubuntu18.04

ARG APT_MIRROR
ARG PIP_MIRROR
ARG PIP_MIRROR_IDX
RUN bash -c "if [[ -n '${APT_MIRROR}' ]]; then sed -i 's#http://archive.ubuntu.com#${APT_MIRROR}#g' /etc/apt/sources.list; fi" && \
    bash -c "if [[ -n '${APT_MIRROR}' ]]; then sed -i 's#http://security.ubuntu.com#${APT_MIRROR}#g' /etc/apt/sources.list; fi"
RUN bash -c "if [[ -n '${PIP_MIRROR}' ]]; then mkdir ~/.pip && echo -e '[global] \ntrusted-host = ${PIP_MIRROR} \nindex-url = ${PIP_MIRROR_IDX}' >  ~/.pip/pip.conf; fi"


# Install Requirements
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        build-essential \
        cmake \
        git \
        vim \
        wget \
        nasm \
        dh-autoreconf \
        libopenblas-dev \
        libboost-all-dev \
        libgflags-dev \
        libgoogle-glog-dev \
        libhdf5-serial-dev \
        libprotobuf-dev \
        libsnappy-dev \
        libgtk2.0-dev \
        libavcodec-dev \
        libavformat-dev \
        libswscale-dev \
        pkg-config \
        protobuf-compiler \
        python3-dev \
        python3-pip && \
    rm -rf /var/lib/apt/lists/*


RUN pip3 install --upgrade pip
RUN pip3 install setuptools numpy
RUN pip3 install https://download.pytorch.org/whl/cu100/torch-1.0.0-cp36-cp36m-linux_x86_64.whl
RUN pip3 install torchvision
RUN pip3 install pylint
WORKDIR /workspace
