#include "std_lib_facilities.h"

// Function that evaluates if a value is odd or even and prints a statement saying result
// Assume zero is classified as an even number for this program
void isOddorEven(int num)
{
    if (abs(num) % 2 == 1)
        cout << "The value " << num << " is an odd number.\n";
    else
        cout << "The value " << num << " is an even number.\n";
}

// Used to get user input and call the "isOddorEven()" function
int main()
{
    int value;
    cout << "Enter a number: ";
    cin >> value;
    isOddorEven(value);
}
