# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/idowu123/C-plus-plus/sfml-projects/create_text_image

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/idowu123/C-plus-plus/sfml-projects/create_text_image/build

# Include any dependencies generated for this target.
include CMakeFiles/createTextAndImage.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/createTextAndImage.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/createTextAndImage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/createTextAndImage.dir/flags.make

CMakeFiles/createTextAndImage.dir/main.cpp.o: CMakeFiles/createTextAndImage.dir/flags.make
CMakeFiles/createTextAndImage.dir/main.cpp.o: ../main.cpp
CMakeFiles/createTextAndImage.dir/main.cpp.o: CMakeFiles/createTextAndImage.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/idowu123/C-plus-plus/sfml-projects/create_text_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/createTextAndImage.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/createTextAndImage.dir/main.cpp.o -MF CMakeFiles/createTextAndImage.dir/main.cpp.o.d -o CMakeFiles/createTextAndImage.dir/main.cpp.o -c /home/idowu123/C-plus-plus/sfml-projects/create_text_image/main.cpp

CMakeFiles/createTextAndImage.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/createTextAndImage.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/idowu123/C-plus-plus/sfml-projects/create_text_image/main.cpp > CMakeFiles/createTextAndImage.dir/main.cpp.i

CMakeFiles/createTextAndImage.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/createTextAndImage.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/idowu123/C-plus-plus/sfml-projects/create_text_image/main.cpp -o CMakeFiles/createTextAndImage.dir/main.cpp.s

# Object files for target createTextAndImage
createTextAndImage_OBJECTS = \
"CMakeFiles/createTextAndImage.dir/main.cpp.o"

# External object files for target createTextAndImage
createTextAndImage_EXTERNAL_OBJECTS =

createTextAndImage: CMakeFiles/createTextAndImage.dir/main.cpp.o
createTextAndImage: CMakeFiles/createTextAndImage.dir/build.make
createTextAndImage: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
createTextAndImage: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
createTextAndImage: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
createTextAndImage: CMakeFiles/createTextAndImage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/idowu123/C-plus-plus/sfml-projects/create_text_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable createTextAndImage"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/createTextAndImage.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy_if_different /home/idowu123/C-plus-plus/sfml-projects/create_text_image/../resources/fonts/Dosis-Light.ttf /home/idowu123/C-plus-plus/sfml-projects/create_text_image/../resources/texture/Archer.jpg /home/idowu123/C-plus-plus/sfml-projects/create_text_image/build

# Rule to build all files generated by this target.
CMakeFiles/createTextAndImage.dir/build: createTextAndImage
.PHONY : CMakeFiles/createTextAndImage.dir/build

CMakeFiles/createTextAndImage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/createTextAndImage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/createTextAndImage.dir/clean

CMakeFiles/createTextAndImage.dir/depend:
	cd /home/idowu123/C-plus-plus/sfml-projects/create_text_image/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/idowu123/C-plus-plus/sfml-projects/create_text_image /home/idowu123/C-plus-plus/sfml-projects/create_text_image /home/idowu123/C-plus-plus/sfml-projects/create_text_image/build /home/idowu123/C-plus-plus/sfml-projects/create_text_image/build /home/idowu123/C-plus-plus/sfml-projects/create_text_image/build/CMakeFiles/createTextAndImage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/createTextAndImage.dir/depend

