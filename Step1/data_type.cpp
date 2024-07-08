#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the input: ";
    cin >> str;
    
    int c; // Variable to store size of data type

    // Determine size based on input string
    if (str == "character") 
        c = 1;
    else if (str == "float" || str == "int")
        c = 4;
    else if (str == "long" || str == "double")
        c = 8;
    else
        c = -1; // Invalid input
    
    // Output the result
    cout << "Size of " << str << " is ";
    if (c == -1)
        cout << "Invalid Input";
    else
        cout << c;
    
    return 0;
}
