/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Infinite Loop Example
Description: This program counts to 5 and ends.
*/

#include <iostream>
using namespace std;

int main () {
int x = 1;
while (x<=5) {
    cout << x << " ";
    x++;
}
 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
I understood that without the update statement, the program will run forever. 

2. Difficulties I faced:
I faced a logic error. I put x=5 instead of x<=5

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand why my code wasn't running correctly and what errors
I was going through. 

5. What I learned:
I learned that you must modify the loop control variable to make the loop 
eventually stop.
In this case, we used x++, the update step, so the loop can stop.

*/