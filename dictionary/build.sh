#!/bin/bash

SOURCE="*.cpp"
OUTPUT="run"

FLAGS="-std=c++17 -Wall"

echo "compilling... $SOURCE"

g++ $FLAGS $SOURCE -o $OUTPUT

if [ $? -eq 0 ]; then

    echo "compilation successful; Run ./$OUTPUT"
else

    echo "compilation failed"

fi    
