#!/bin/bash

SOURCE= "*.cpp"
OUTPUT= "run"

FLAGS= "std=c++17 -Wall"

echo "compiling $SOURCE..."
g++ $FLAGS $SOURCE -o $OUTPUT

if [ $? -eq 0 ]; then

    echo "compilation successful. your is running below this message"
    ./$OUTPUT

else

    echo "compilation failed"
    
fi