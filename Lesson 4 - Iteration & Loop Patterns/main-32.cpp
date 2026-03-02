/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: while Example: Class Average
Description: This program asks the user for 10 grades and then 
calculates the class average.
*/

#include <iostream>
using namespace std;

int main(){
    int total = 0;
    int counter = 1;
    
    while (counter <=10) {
        int grade;
        cin >> grade;
        total += grade;
        counter ++;
    }
    
    double average = 
    static_cast<double>(total) / 10;
    cout << average;
    
    return 0;
}

/*
Reflection:
1. What I understood from this program:
This program is an example of counter-controlled iteration.
I understood that iteration includes initilization, condition, and update.
The counter starts at 1 and ends at 10.
The condition makes sure the loop stops at 10.
The update makes sure the loop is not infinite by increasing the count by 1.
Without the update, the value of the counter would stay at one and 
the program would never stop.

2. Difficulties I faced:
I faced difficulties with syntax. I had forgotten to put, using namespace std; 
at the beginning of my program.

3. What I needed to search or review:
I needed to search on the lecture slides and look at the examples.

4. AI Usage (if any):
I used AI to help me understand the concepts and explain them better. 

5. What I learned:
I learned that iteration includes initilization, condition, and update. 

*/