#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int Menu_Quit = 5;
    int Menu_Choice = 0; // Initialize Menu_Choice to a value that is not equal to Menu_Quit
    int Number_Factorial;
    int Number_Pyramid;
    int Number_Sum;
    string String_Reverse;
    int String_Length;
    int rows;
    int count = 0;
    int count1 = 0;
    int k = 0;

    // Use a while loop to keep the program running until the user chooses to quit
    while (Menu_Choice != Menu_Quit) {
        cout << "Interactive Utility Program" << endl;
        cout << "===========================" << endl;
        cout << "1. Factorial Calculator" << endl;
        cout << "2. Number Pyramid" << endl;
        cout << "3. Sum of Even or Odd Numbers" << endl;
        cout << "4. Reverse a String" << endl;
        cout << "5. Exit" << endl;
        cout << "===========================" << endl;
        cout << "Enter your choice: ";
        cin >> Menu_Choice;
        cout << endl;

    }