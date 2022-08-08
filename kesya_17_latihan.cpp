// C++ program to illustrate nasted-if statement
#include <iostream> std;
using namespace  std;
int main ()
{
    int i = 10;
    if (i == 10)
    {
        // First if statement
        if (i < 15)
        cout<<"i is smaller than 15\n";

        //Nested - if statement
        //will only be executed if statement above
        //is true
        if (i < 12)
            cout<<"is smaller than 12 too\n";
             else
            cout<<"i is greater than 15";
        }

        return 0;

}
