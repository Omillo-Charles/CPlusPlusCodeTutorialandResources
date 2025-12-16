// Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.
// Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

// create a class
#include <iostream>
#include <string>
using namespace std;

class myName
{
public:          // access specifier
    string name; // attribute
};

int main()
{
    myName nameObj;
    nameObj.name = "Omillo Fidel Charles";
    cout << nameObj.name;

    return 0;
}