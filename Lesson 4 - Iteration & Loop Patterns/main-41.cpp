/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: do...while in action
Description: This program prints the number 10, then x becomes 11, the the Loop
realizes 11 <=5 is false and stops.
*/

#include <iostream>
using namespace std;

int main () {
   int x = 10;
   
   do { 
       cout << x; // This prints 10!
       x++;
   } while (x <= 5);
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
The program prints 10 atleast once. A do-while loop always 
executes the body at least once.

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
Do-while loops always execute the body atleast once.
*/