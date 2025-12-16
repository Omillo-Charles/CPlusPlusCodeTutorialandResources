// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
// If you want others to read or modify the value of a private member, you can provide public get and set methods.
#include <iostream>
#include <string>
using namespace std;

class student
{

private:
    string regNo;

public:
    string course;

    void setRegNo(string reg)
    {
        regNo = reg;
    }

    string getRegNo()
    {
        return regNo;
    }
};

int main()
{
    student studentObj;
    studentObj.setRegNo("12b45");
    studentObj.course = "Software Engineering";

    cout << studentObj.getRegNo() << "\n";
    cout << studentObj.course;

    return 0;
}