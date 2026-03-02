/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Logic Interruptors
Description: This program displays 1 2 4 5
The program includes a counter-control loop from 1 to 10.
When i = 3 the program skips the iteration.
Meaning 3 will not be printed.
When i = 6 the break statement ends the loop.
*/

#include <iostream>
using namespace std;

int main () {
   for (int i = 1; i <= 10; i++) {
       if (i == 3) {
           continue; // Skip the rest of this iteration
       }
       if (i ==6) {
           break; // Exit the loop entirely
       }
       cout << i << " ";
   }
   // Output: 1 2 3 4 5
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
Continue is used to skip the rest of the iteration.
Break is used to exit the loop entirely.

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
Continue is used to skip the rest of the iteration.
Break is used to exit the loop entirely.
This shows how you can control loop flow based on conditions.
*/