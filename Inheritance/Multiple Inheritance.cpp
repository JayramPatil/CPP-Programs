#include<iostream>
#include<conio.h>

using namespace std;

class base
{
     public :
             int x;

             base()
             {
                 x=y=z=0;
                 cout<<"Inside Default Constructor"<<endl;
             }

             base(int m,int n)
             {
                 y=m;
                 x=n;
                 cout<<"\n Inside Parameter Constructor";
             }
             void fun()
             {
                 cout<<"\n Inside Fun()";
             }
             ~base()
             {
                 cout<<"\n Inside Destructor";
             }
    private:
            int y;

            void gun()
            {
                cout<<"\n Inside Gun()";
            }
  protected:
            int z;

            void run()
            {
                cout<<"\n Inside Run()";
            }
};
class base1
{
     public :
             int a;

             base1()
             {
                 a=b=c=0;
                 cout<<"Inside Default Constructor of Base1"<<endl;
             }

             base1(int m,int n)
             {
                 a=m;
                 b=n;
                 cout<<"\n Inside Parameter Constructor of Base1";
             }
             void sun()
             {
                 cout<<"\n Inside Sun()";
             }
             ~base1()
             {
                 cout<<"\n Inside Destructor 2";
             }
    private:
            int b;

            void mun()
            {
                cout<<"\n Inside Mun()";
            }
  protected:
            int c;

            void tun()
            {
                cout<<"\n Inside Tun()";
            }
};
class base2:public base1,base
{
     public :
             int d;

             base2()
             {
                 d=e=f=0;
                 cout<<"Inside Default Constructor"<<endl;
             }

             base2(int m,int n)
             {
                 d=m;
                 e=n;
                 cout<<"\n Inside Parameter Constructor";
             }
             void jun()
             {
                 cout<<"\n Inside Jun()";
             }
             ~base2()
             {
                 cout<<"\n Inside Destructor";
             }
    private:
            int e;

            void oun()
            {
                cout<<"\n Inside oun()";
            }
  protected:
            int f;

            void hun()
            {
                cout<<"\n Inside Hun()";
            }
};
int main()
{
    base2 obj;
    obj.jun();
    base2(5,6);

    getch();
    return 0;
}
