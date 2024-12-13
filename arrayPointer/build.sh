#!/bin/bash

SOURCE="*.cpp"
OUTPUT="run"
FLAG="-std=c++17 -Wall"

echo "compiling $SOURCE..."
g++ $FLAG $SOURCE -o $OUTPUT

if [ $? -eq 0 ]; then

    echo "compilation successful"
    ./$OUTPUT

else
    
    echo "compilation failed"

fi