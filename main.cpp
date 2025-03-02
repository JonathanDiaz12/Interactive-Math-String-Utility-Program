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
    string Number_Choice;
    int ODD =0, EVEN = 0 ,Default =1 ,User_Limit;
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
            }
            cout << endl;
            cout << "===========================" << endl;    
        } else if (Menu_Choice == 3) {
            cout << "Do you want the sum of even or odd numbers? (Type 'Odd' or 'Even') ";
            cin >> Number_Choice;
            cout << "Enter the Maximum number to sum: ";
            cin >> User_Limit;
            do {
                if (Default % 2 == 0) {
                    EVEN += Default;
                } else {
                    ODD += Default;
                }
                Default++;
            } while (Default <= User_Limit);

            if (Number_Choice == "Even") {
                cout << "The sum of even numbers from 1 to " << User_Limit << " is: " << EVEN << endl;
            } else if (Number_Choice == "Odd") {
                cout << "The sum of odd numbers from 1 to " << User_Limit << " is: " << ODD << endl;
            }
        }else if(Menu_Choice == 4){
            string str;
            cout<<"Enter a string to reverse: ";
            cin>>str;
            int left = 0;
            int right = str.length() - 1;
            cout<<"The reverse of the string is: ";
            while (right > left)
            {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            cout<<str<<endl;
            
        }else if (Menu_Choice == 5) {
            cout << "Goodbye!" << endl;
            return 0;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
        return 0;
    }
}