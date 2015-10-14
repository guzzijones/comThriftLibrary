#!/bin/bash
thrift --gen cpp comProto.thrift
cp ./gen-cpp/*.h ./include/
cp ./gen-cpp/*.cpp ./src/
