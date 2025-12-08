// You can also pass a reference to the function
// This can be useful when you need to change the value of the argument(s)
#include <iostream>
#include <string>
using namespace std;

void changeValue(int &number)
{
    number = 43;
}

int main()
{
    int newNumber = 67;
    cout << newNumber;      // prints 67
    changeValue(newNumber); // Call the value with the newNumber variable as the argument. Will be changed to 43
    cout << newNumber;      // outputs 43
}