/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Demonstrate Program for Constructor and Destructor Types and Call Sequence.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<conio.h>
using namespace std;

class Const_Dest             // Constructor and Destructor Name of Class
{
                private:            // Private Access Specifier
                            int x,y; // Data Member or Characteristics of Class

                public:             // Public Access Specifier

                           Const_Dest()  // Default Constructor
                           {
                                    cout<<"\n Inside Default Constructor...!!!"<<endl;
                                    this-> x = 0;
                                    this-> y = 0;
                           }

                           Const_Dest(int iNo1,int iNo2) // Parameterized Constructor
                           {
                                    cout<<"\n Inside Parameterized Constructor...!!!"<<endl;
                                    this->x = iNo1;
                                    this->y = iNo2;
                           }

                           Const_Dest(Const_Dest &ref) // Copy Constructor
                           {
                                    cout<<"\n Inside Copy Constructor...!!!"<<endl;
                                    this->x = ref.x;
                                    this->y=ref.y;
                           }

                           void Display() // Member Function or Behavior of Class
                           {
                                    cout<<"\n x = "<<x<<"\n y = "<<y<<endl;
                           }

                           ~Const_Dest() // Destructor (Destructor call will Flow Bottom to Top Approach)
                           {
                                     cout<<"\n Inside Destructor....!!! x = "<<x<<endl;
                           }
};

int main()
{
      int a = 0,b = 0;



      Const_Dest cobj1; // Default Constructor Object
      cobj1.Display();

      cout<<"\n Please Enter Two Parameters to Pass for Parameterized Constructor =>"<<endl;
      cin>>a>>b;

      Const_Dest cobj2(a,b); // Parameterized Constructor Object
      cobj2.Display();

      Const_Dest cobj3(cobj1); // Copy Constructor Object
      cobj3.Display();

      Const_Dest cobj4(cobj2); // Copy Constructor Object Made Recopy Constructor Because it was giving error of Redeclaration
      cobj4.Display();

      getch();

      return 0;

      /// Note :- Destructor Will Class Default By Compiler
}
