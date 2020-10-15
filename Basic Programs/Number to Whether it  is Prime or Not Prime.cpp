///////////////////////////////////////////////////////////////////////////////////////////
/// Write Program to accept no. from user & check whether it is prime or not.
////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Prime
{
        private:
                    int iNo,i;

                    int Logic()
                    {
                           if(iNo <= 0)
                           {
                                 cout<<"\n Invalid Input"<<endl;
                                 Accept();
                           }
                           while(i < iNo/2)
                           {
                                   (iNo % i == 0)
                                   {
                                        return 1;
                                   }
                                   i++;
                           }
                           return 0;
                    }
        public:
                   Prime()
                   {
                         this->iNo = 0;
                         this->i = 2;
                   }
                   void Accept()
                   {
                          cout<<"\n Please Enter Number => ";
                          cin>>iNo;
                   }
                   void Display()
                   {
                        Accept();
                        cout<<((Logic() == 1)?"\nGiven Number Is Prime":"\nGiven Number Is Not Prime");
                   }
                   ~Prime()
                   {
                       // Object Will Destroy
                   }

};

int main()
{
       Prime pobj;
       pobj.Display();

       return 0;
}
