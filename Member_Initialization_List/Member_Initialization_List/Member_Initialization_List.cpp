#include <iostream>
using namespace std;

class Base
{
    int k, l;
public :
    Base(int i)
    {
        k = 0;
        l = 2;
        cout << "Inside Base";
    }

};
class Derived:Base
{
    int i, j;
public:
    Derived():i(5),Base(1)
    {
        i = 8;
        j = 7;
        cout << "Inside Derived";
    }
};

int main()
{
    Derived Obj;
}

