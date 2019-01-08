#!/bin/bash
REPO=image-vliu.com:9487
CONTAINER=pyorch_docker_example_p36
TAG=latest
DOCKER_IMAGE=$REPO/$CONTAINER:$TAG

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
BUILDROOT=$DIR/..

# -d
cmd="nvidia-docker run -it --rm \
    -v $BUILDROOT:/workspace \
    -v /etc/localtime:/etc/localtime \
    $DOCKER_IMAGE bash
"

echo $cmd
eval $cmd
