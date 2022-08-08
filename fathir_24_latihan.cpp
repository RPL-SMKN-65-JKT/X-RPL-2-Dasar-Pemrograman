// C++ program to illustrate nested-if statement
#include <iostream>
using namespace std;

int main()
{
    int i = 5;

    if (i == 5)
    {
        //First if statement
        if (i < 15)
            cout<<"i is smaller than 15\n";

        // Nested - if statement
        // will only be executed if statement above
        // is true
        if (i < 12)
            cout<<"kena mental jaki\n";
        else
            cout<<"i is greater than 15";
    }

    return 0;
}
