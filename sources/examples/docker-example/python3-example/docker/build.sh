#!/bin/bash
REPO=image-vliu.com:9487
CONTAINER=pyorch_docker_example_p36
TAG=latest
DOCKER_IMAGE=$REPO/$CONTAINER:$TAG

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
BUILDROOT=$DIR/..

source $1

# Build docker
cmd="docker build \
  --build-arg APT_MIRROR=$APT_MIRROR \
  --build-arg PIP_MIRROR=$PIP_MIRROR \
  --build-arg PIP_MIRROR_IDX=$PIP_MIRROR_IDX \
  -t $DOCKER_IMAGE \
  -f $DIR/Dockerfile \
  $BUILDROOT"
echo $cmd
eval $cmd
