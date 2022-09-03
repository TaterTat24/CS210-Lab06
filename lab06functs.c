/** lab06functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 6
* Purpose: Programing is Problem Solving
* ===========================================================
*/
#include <stdio.h>
#include <math.h>
#include "lab06functs.h"

int const FEETPERSTORY = 20;
double const GRAVITY = 9.7998;
double const FOOTTOMETERS = 0.3048;

double StoryToFeet(int numberOfStories) {
    double feet = numberOfStories * FEETPERSTORY;
    return feet;
}

double timeToFallFeet(double feet) {
    double time = sqrt(2 * feet * FOOTTOMETERS / GRAVITY);
    return time;
}