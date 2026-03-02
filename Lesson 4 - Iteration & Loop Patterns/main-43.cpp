/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Input Validation Pattern
Description: This program asks the user to enter an age from 1-120.
If the input is invalid, the program asks the user to 
enter a realistic age.
*/

#include <iostream>
using namespace std;

int main () {
   int age;
   cout << "Enter age (1-120): ";
   cin >> age;
   
   // This loop only runs IF the data is bad
 while (age < 1 || age > 120) {
     cout << "Invalid. Please enter a realistic age: ";
     cin >> age;
 }
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
The "Gatekeeper" Loop is a pattern that forces the user to enter a 
"sane" value before the rest of the program can run.

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
The gatekeeper loop will only run IF the data is bad. 
*/