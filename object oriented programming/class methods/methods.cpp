// Methods are functions that belongs to the class.
#include <iostream>
#include <string>
using namespace std;

class greeting
{
public:
    void myGreeting()
    {
        cout << "Hello World \n";
    }
};

int main()
{
    greeting greetObj;
    greetObj.myGreeting();

    return 0;
}

// defining a method outside a class
// This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function
#include <iostream>
#include <string>
using namespace std;

class softwareEngineering
{
public:
    void university();
};

void softwareEngineering::university()
{
    cout << "Multimedia University of Kenya.";
};

int main()
{
    softwareEngineering uniObject;
    uniObject.university();

    return 0;
}

// parameters
// you can also pass values to methods just like in regular functions
#include <iostream>
#include <string>
using namespace std;

class name
{
public:
    string nameFunc(string myName);
};

string name::nameFunc(string myName)
{
    return myName;
}

int main()
{
    name nameObj;
    cout << nameObj.nameFunc("Omillo");

    return 0;
}