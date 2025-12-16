// A constructor is a special method that is automatically called when an object of a class is created.
// Constructor rules
// 1. The constructor has the same name as the class.
// 2. It has no return type (not even void).
// 3. It is usually declared public.
// 4. It is automatically called when an object is created.
#include <iostream>
#include <string>
using namespace std;

class greeting
{
public:
    greeting()
    {
        cout << "Hello World! \n";
    }
};

int main()
{
    greeting greetingFunc;

    return 0;
}

// constructor with parameters
// Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
#include <iostream>
#include <string>
using namespace std;

class universities
{
public:
    string uni1;
    string uni2;

    universities(string govt, string priv)
    {
        govt = uni1;
        priv = uni2;
    }
};

int main()
{
    universities uniObj1("Kenyatta University", "Strathmore University");
    universities uniObj2("University Of Nairobi", "Zetech University");

    cout << uniObj1.uni1 << "\n";
    cout << uniObj1.uni2 << "\n";
    cout << uniObj2.uni1 << "\n";
    cout << uniObj2.uni2 << "\n";

    return 0;
}

// Constructor Defined Outside the Class
// You can also define the constructor outside the class using the scope resolution operator ::.
#include <iostream>
#include <string>
using namespace std;

class cities
{
public:
    string main;
    string vice;
    cities(string capital, string second);
};

cities::cities(string capital, string second)
{
    main = capital;
    vice = second;
}

int main()
{
    cities citiesObj1("Nairobi", "Mombasa");
    cities citiesObj2("Kampala", "Entebbe");

    cout << citiesObj1.main << "\n";
    cout << citiesObj1.vice << "\n";
    cout << citiesObj2.main << "\n";
    cout << citiesObj2.vice << "\n";

    return 0;
}