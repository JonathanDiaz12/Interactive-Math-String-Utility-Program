#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int Menu_Quit = 5;
    int Menu_Choice = 0; // Initialize Menu_Choice to a value that is not equal to Menu_Quit
    int Factorize,f=1,i=1;
    int row, space;
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
        if (Menu_Choice ==1)
        {
            cout<<"Enter the number to factorialize it"<<endl;
            cin>>Factorize;
            while(i<=Factorize)
            {
                f=f*i;
                i++;
            }
            cout<<"The factorial of "<<Factorize<< "is: "<<f<<endl; 
        }else if(Menu_Choice ==2){
            cout<<"Enter the amount of rows for the pyramid: ";
            cin>>row;
            for(int i = 1, k = 0; i <= row; ++i, k = 0) {
                for(space = 1; space <= row-i; ++space) {
                    cout <<"  ";
                }
        
                while(k != 2*i-1) {
                    cout << k<<" ";
                    ++k;
                }
                cout << endl;
            }cout<<"==========================="<< endl;    
        }else if(Menu_Choice==3){
            
        }
    }
    return 0;
}