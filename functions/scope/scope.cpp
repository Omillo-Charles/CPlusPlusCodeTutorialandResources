// In C++, variables are only accessible inside the region they are created. This is called scope.

// Local Scope - A variable created inside a function belongs to the local scope of that function, and can only be used inside that function
#include <iostream>
using namespace std;
void myFunction()
{
    // Local variable that belongs to myFunction
    int x = 5;

    // Print the variable x
    cout << x;
}

int main()
{
    myFunction();
    return 0;
}

// Global Scope - A variable created outside of a function, is called a global variable and belongs to the global scope.
// Global variables are available from within any scope, global and local
#include <iostream>
using namespace std;
// Global variable x
int x = 5;

void myFunction()
{
    // We can use x here
    cout << x << "\n";
}

int main()
{
    myFunction();

    // We can also use x here
    cout << x;
    return 0;
}