/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Counting down
Description: This program counts down from 10 to 1
*/

#include <iostream>
using namespace std;

int main () {
    for (int i = 10; i >= 1; --i)
    { cout << i << " ";
    }
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
Loops can move backwords by changing the initialization, condition,
and the increment.

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
Counter-controlled iteration can be decrementing or incrementing. 
*/