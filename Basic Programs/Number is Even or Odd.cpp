#include<iostream>
#include<conio.h>
using namespace std;
class EvenOdd
{
    private:
            int iNo;

            int Logic()
            {
                   if(iNo <= 0)
                   {
                        cout<<"\n Invalid Input"<<endl;
                        Accept();
                   }
                   return (iNo%2 == 0)?1:0;
            }
    public:
           EvenOdd()
           {
                 this->iNo = 0;
           }
           void Accept()
           {
                  cout<<"\nPlease Enter Number => ";
                  cin>>iNo;
           }
           void Display()
           {
                Accept();
                cout<<((Logic() == 1)?"\nGiven Number Is Even":"\nGiven Number Is Odd");
           }

};

int main()
{
       EvenOdd obj;
       obj.Display();

       return 0;
}
