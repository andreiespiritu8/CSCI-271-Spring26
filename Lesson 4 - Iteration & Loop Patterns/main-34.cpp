/*
Name: Andrei Espiritu
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Sentinel Implementation
Description: This program asks the user to enter grades until the user 
enters -1 to quit. Then the program calculates the average.
*/

#include <iostream>
using namespace std;

int main () {
    
int total = 0, counter = 0, grade;

cout << "Enter grade or -1 to quit: ";
cin >> grade; // 1. Prime the loop (get first input)

while (grade != -1) { // 2. Test the condition
  total += grade;  // 3. Process
  counter++;
  
  cout << "Enter next grade or -1 to quit: ";
  cin >> grade;  //4. Update (get next input)
}
// Termination Phase: "The Zero Check"
if (counter != 0) {
    double average = static_cast<double>(total) / counter;
    cout << "Class average is " << average;
} else {
    cout << "No grades were entered."; // Prevents division by zero!
}

 return 0;
} 
   


/*
Reflection:
1. What I understood from this program:
This program uses sentinel-controlled iteration. The program does not stop
until the user enters -1.

2. Difficulties I faced:
I faced no errors while reproducing this code example from the slides.

3. What I needed to search or review:
I needed to search the lecture slides and the examples. 

4. AI Usage (if any):
I used AI to help me understand the concepts.

5. What I learned:
The program uses the if statement to prevent division by zero. 
This is so the program does not crash.

*/