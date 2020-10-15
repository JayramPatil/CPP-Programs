#include<iostream>
using namespace std;
class Base
{
        private :
                      int i,j;      // Private Data Member of Class Base
        public:
                   Base()          // Default Constructor of Class Base
                   {
                          this->i = 0;    // Initialized data member
                          this->j=0;      // Initialized data member
                   }
                   void Fun()
                   {
                         cout<<"\n Inside Fun Function Base Class"<<endl;
                   }
                   ~Base()
                   {
                         // Object Will Destroy in Destructor of Base Class
                   }

};
class Derived : public Base
{
        private:
                    int x,y; // Private Data Member of Class Base
        public:
                   Derived()
                   {
                          this->x = 0;      // Initialized data member
                          this->y = 0;     // Initialized data member
                   }
                   void Sun()
                   {
                        cout<<"\n Inside Sun Function Derived Class"<<endl;
                   }
                   ~Derived()
                   {
                         // Object Will Destroy in Destructor of Derived Class
                   }

};

int main()
{
      Derived dobj;

      dobj.Fun(); // Derived Class Object Can Call Fun() of Base Class Because it is Come From Base Class
      dobj.Sun();
     // bobj.Sun(); // We Cann't Call Derived Class Sun() By Base Class Object Because Base is Not Derived From Derived Class

     return 0;
}




