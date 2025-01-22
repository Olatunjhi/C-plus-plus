#ifndef MAIN_H
#define MAIN_H

#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

extern float rectWidth;
extern float rectHeight;
extern float rectLeft;
extern float rectTop;

extern float timer;
extern float maxTimer;
extern float multiplier;

void animinatePlayer(string activity, float activityDeltaTime);
void keyboards(float keyboardDeltaTime, RectangleShape &boxMan);

#endif /* MAIN_H*/