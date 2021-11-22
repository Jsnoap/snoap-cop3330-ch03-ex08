#include "std_lib_facilities.h"

// Function that evaluates if a value is odd or even and prints a statement saying result
// Assume zero is classified as an even number for this program
void isOddorEven(int num)
{
    if (abs(num) % 2 == 1)
        std::cout << "The value " << num << " is an odd number." << std::endl;
    else
        std::cout << "The value " << num << " is an even number." << std::endl;
}

// used to call the "isOddorEven()" function
int main()
{
    isOddorEven(5);
    isOddorEven(4);
    isOddorEven(0);
    isOddorEven(-4);
    isOddorEven(-21451);
}
