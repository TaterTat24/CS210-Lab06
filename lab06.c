// Not much is being provided to you this time.

// That's the point!  In this lab, you are going 
// to practice solving problems using a formal
// process.

/** lab06.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 6
* Purpose: Programing is Problem Solving
* ===========================================================
*/

#include <stdio.h>
#include "lab06functs.h"

int main(int argc, char const *argv[]) {
    int numberOfStories = 0;
    printf("Enter number of stories: ");
    scanf("%d", &numberOfStories);
    
    double feet = StoryToFeet(numberOfStories);
    double time = timeToFallFeet(feet);

    printf("It takes %.3lf seconds for an object to fall from a building %d stories tall.\n", time, numberOfStories);

    return 0;
}
