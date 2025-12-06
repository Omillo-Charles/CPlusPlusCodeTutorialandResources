// Strings are used for storing text/characters.
// For example, "Hello World" is a string.
// A string variable contains a collection of characters surrounded by double quotes ("")

#include <iostream>
#include <string> //String library since Strings are not primitive data Types
using namespace std;

int main()
{

    string name = "Omillo Fidel Charles";
    string gender = "Male";

    cout << name;
    cout << gender;

    return 0;
}

// STRING CONCATENATION
// The + operator can be used between strings to add them together to make a new string. This is called concatenation
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string firstName = "Omillo ";
    string lastName = "Charles";
    string fullName = firstName + lastName;

    cout << fullName;

    return 0;
}

// APPEND
// A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string unitName1 = "Probability and";
    string unitName2 = " Statistics";
    string unitName = unitName1.append(unitName2);

    cout << unitName;

    return 0;
}

// STRING LENGTH
// To get the length of a string, use the length() function
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string midfielder = "MoisesCaicedo";

    cout << midfielder.length(); // returns the length of the string midfielder

    return 0;
}

// ACCESS STRINGS
// You can access the characters in a string by referring to its index number inside square brackets []
// The <string> library also has an at() function that can be used to access characters in a string
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string school = "BrookHouse";

    cout << school[5];
    cout << school.at(4);

    return 0;
}

// USER INPUT STRINGS
// It is possible to use the extraction operator >> on cin to store a string entered by a user
// when working with strings, we often use the getline() function to read a line of text.It takes cin as the first parameter, and the string variable as second
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string fullName;

    cout << "Enter your full name: ";
    cin >> fullName;

    cout << "Your full name is " << fullName; // In the event you enter your full name as Omillo Charles the output will be Omillo. To solve this we use the getline() function

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Your full Name is: " << fullName; // This will output whatever name you input

    return 0;
}

// OMITTING THE NAMESPACES
// You might see some C++ programs that run without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects
#include <iostream>
#include <string>
// using namespace std; - Remove this line

int main()
{
    std::string greeting = "Hello";
    std::cout << greeting;
    return 0;
}