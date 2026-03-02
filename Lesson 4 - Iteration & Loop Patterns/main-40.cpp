/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Counter vs. Accumulator
Description: This program adds all numbers from 1 to 5 and prints the sum.
*/

#include <iostream>
using namespace std;

int main () {
    // Accumulator Pattern
   int sum = 0;
   
   for (int i = 1; i <= 5;
   i ++) sum += i;
       cout << "Sum = " << sum << endl;  
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
An accumulator is like a snowball rolling down a hill
and getting bigger as it picks up more snow.
A counter counts on by one.
While an accumulator gradually gets bigger and bigger.

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