// A lambda function is a small, anonymous function you can write directly in your code. It's useful when you need a quick function without naming it or declaring it separately.
#include <iostream>
using namespace std;

int main()
{
    auto add = [](int x, int y)
    {
        return x + y;
    };

    cout << add(3, 5);
    return 0;
}