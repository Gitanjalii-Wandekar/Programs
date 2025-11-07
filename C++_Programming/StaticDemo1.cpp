#include<iostream>
using namespace std;

class Demo
{
    public:
        //KYC,Balance in Bank
        int i;
        int j;
        //ROI
        static int x;//no memory allocation as object is not required to access it 

        Demo()
        {
            this->i=0;
            this->j=0;
        }

        Demo(int a, int b)
        {
            this->i=a;
            this->j=b;
        }

        //Housing loan
        void Fun() //void Fun(Demo * const this)                non-static(by default)
        {
            cout<<"Inside Fun\n";
        }

        static void Gun()// static void Gun()
        {
            cout<<"Inside Gun\n";

        }

};
int Demo :: x = 11; // :: = scope resolution operator

int main()
{

    Demo :: Gun();
    cout<<"Value of x is :"<<Demo :: x<<"\n";
    return 0;

}