/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Summing even numbers
Description: This program adds all even numbers starting from 2 to 20. 
The program displays the sum of 110.
*/

#include <iostream>
using namespace std;

int main () {
   int sum = 0;
   for (int i = 2; i <= 20; i += 2) {
       sum += i; // Adds 2, 4, 6, ...,
       }

cout << "Sum is " << sum;
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
You don't have to increment by 1. 

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
Incrementing the loop variable by 2 makes the program more efficient.
*/