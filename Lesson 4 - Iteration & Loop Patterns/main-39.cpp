/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Counter vs. Accumulator
Description: This program counts how many times the loop runs.
*/

#include <iostream>
using namespace std;

int main () {
    // Counter Pattern
   int count = 0;
   
   for (int i = 0; i < 10;
   i ++) count ++;
       cout << "Count = " << count << endl;  
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
A counter is like a person counting one by one who comes through a door.

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
Counter patterns and Accumulator patterns can be confused
with eachother. A counter pattern counts one by one.
An accumulator pattern gets bigger over time
like a snowball rolling down a hill.
*/