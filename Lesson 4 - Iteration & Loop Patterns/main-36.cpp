/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Scope and Lifetime
Description: This program does not display anything 
*/

#include <iostream>
using namespace std;

int main () {
    for (int i = 0; i < 5; i++) {
    // i is ALIVE here
}
// i is DEAD here
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
Inside the curly braces, the i can still be used. 
Outside of the curly braces, i does not exist.

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
i is out of scope outside the curly braces. using cout << i 
after the loop will cause a compiler error.
*/