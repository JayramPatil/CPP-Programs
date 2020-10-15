#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Calculator
{
       private:
                int iNo1;
                int iNo2;
                int iRet;
                float fRet;

       public:
              Calculator()
              {
                     this ->iNo1 = 0;
                     this ->iNo2 = 0;
                     this ->iRet = 0;
                     this ->fRet = 0.0;
              }

              void Accept()
              {
                   cout<<"\n Enter Two Numbers And Press Enter \n\n  =>\t";
                   cin>>iNo1>>iNo2;
                   system("CLS");
                    cout<<"\n=========================================="<<endl;

                   return;
              }
              void add()
              {
                    Accept();
                    iRet = iNo1 + iNo2;
                    cout<<"\n Addition of Two Numbers is =>  "<<iRet<<endl;
                    return;
              }
              void sub()
              {
                    Accept();
                    iRet = iNo1 - iNo2;
                    cout<<"\n Subtraction of Two Numbers is =>  "<<iRet<<endl;
                    return;
              }
              void multi()
              {
                    Accept();
                    iRet = iNo1 * iNo2;
                    cout<<"\n Multiplication of Two Numbers is =>  "<<iRet<<endl;
                    return;
              }
             void divi()
              {
                    Accept();
                    fRet = float(iNo1)/ float(iNo2);
                    cout<<"\n Division of Two Numbers is =>  "<<fRet<<endl;
                    return;
              }
              ~Calculator()
              {
                  // Object will Destroy here;
              }
};

int main()
{
    int choice;
    Calculator cobj;

    for(;;)
    {
        cout<<"\n===================================="<<endl;
        cout<<"\n\t 1.Addition"<<endl;
        cout<<"\n\t 2.Subtraction"<<endl;
        cout<<"\n\t 3.Multiplication"<<endl;
        cout<<"\n\t 4.Division"<<endl;
        cout<<"\n\t 5.Exit"<<endl;
        cout<<"\n===================================="<<endl;

        cout<<"\n Enter Your Choice =>  ";
        cin>>choice;

        cout<<"\n===================================="<<endl;

        switch(choice)
        {
            case 1:

                    cobj.add();
                    break;
            case 2:

                    cobj.sub();
                    break;
            case 3:

                    cobj.multi();
                    break;
            case 4:

                    cobj.divi();
                    break;
            case 5:
                    exit(0);
            default :
                    cout<<"\n Enter Valid Number"<<endl;
                    break;
        }
       cout<<"\n=========================================="<<endl;

       cout<<"\n\n\t PRESS ANY KEY TO SEE MAIN MENU "<<endl;
       getch();
       system("CLS");
    }
}
