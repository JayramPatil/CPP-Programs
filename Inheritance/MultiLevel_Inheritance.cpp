///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///                       Demonstrate Program for Multilevel Inheritance.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
class Base
{
                private :
                              int i,j;      // Private Data Member of Class Base
                public:
                           Base()          // Default Constructor of Class Base
                           {
                                  cout<<"\n Inside Default Constructor of Base Class....!!!"<<endl;
                                  this->i = 40;    // Initialized data member
                                  this->j=30;      // Initialized data member
                           }
                           Base(int a,int b) //Parameterized Constructor of Base Class
                           {
                                  cout<<"\n Inside Parameterized Constructor of Base Class....!!!"<<endl;
                                  this->i = a;
                                  this->j = b;
                           }
                           void Fun() // Member Function of Base class
                           {
                                 cout<<"\n Inside Fun Function Base Class"<<endl;
                                 cout<<"\n i = "<<i<<"\n j = "<<j<<endl;
                           }
                           ~Base() // Destructor of Base Class
                           {
                                 cout<<"\n Inside Destructor of Base Class.....!!!"<<endl;
                           }

};
class Derived1 : public Base
{
                private:
                            int x,y; // Private Data Member of Class Base
                public:
                           Derived1()
                           {
                                  cout<<"\n Inside Default Constructor of Derived1 class....!!!!"<<endl;
                                  this->x = 0;      // Initialized data member
                                  this->y = 0;     // Initialized data member
                           }
                            Derived1(int a,int b) //Parameterized Constructor of Derived1 Class
                           {
                                  cout<<"\n Inside Parameterized Constructor of Derived1 Class....!!!"<<endl;
                                  this->x = a;
                                  this->y = b;
                           }
                           void Sun() //Member Function of Derived2 class
                           {
                                cout<<"\n Inside Sun Function Derived Class"<<endl;
                                cout<<"\n x = "<<x<<"\n y = "<<y<<endl;
                           }
                           ~Derived1() // Destructor of Derived2 class
                           {
                                 cout<<"\n Inside Destructor of Derived1 Class.....!!!"<<endl;
                           }

};

class Derived2:public Derived1
{
               private:
                            int k,z; // Private Data Member of Class Base
                public:
                           Derived2()
                           {
                                  cout<<"\n Inside Default Constructor of Derived1 class....!!!!"<<endl;
                                  this->k = 0;      // Initialized data member
                                  this->z = 0;     // Initialized data member
                           }
                            Derived2(int a,int b) //Parameterized Constructor of Derived2 Class
                           {
                                  cout<<"\n Inside Parameterized Constructor of Derived2 Class....!!!"<<endl;
                                  this->k = a;
                                  this->z = b;
                           }
                           void Gun() // Member Function of Derived2 class
                           {
                                cout<<"\n Inside Gun Function Derived2 Class "<<endl;
                                cout<<"\n k = "<<k<<"\n z = "<<z<<endl;
                           }
                           ~Derived2() // Destructor of Derived2 class
                           {
                                 cout<<"\n Inside Destructor of Derived2 Class.....!!!"<<endl;
                           }
};

int main()
{
      Derived2 dobj; // Derived2 is Inherits from Derived1 and Derived1 is Inherits From Base so it will All Constructor
      //Derived2 pobj(50,60);// it call only one Derived2 Parameterized Constructor
      //pobj.Gun();

      dobj.Fun();// Derived2 Object Can Call Base Member Function
      dobj.Sun(); // Derived2 Object Can Call Derived1 Member Function
      dobj.Gun();// Derived2 Object Call Member Function of its own

     return 0;
}




