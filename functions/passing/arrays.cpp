// Pass Arrays as Function Parameters
// You can also pass arrays to a function
#include <iostream>
#include <string>
using namespace std;

void myFunction(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
}

int main()
{
    int myNumbers[5] = {1, 2, 3, 4, 5};
    myFunction(myNumbers);

    return 0;
}

// The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the array elements with the for loop.
// When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.