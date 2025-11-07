#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
        void gun()
        {
            cout<<"Inside Base gun\n";
        }
        virtual void sun()
        {
            cout<<"Inside Base sun\n";
        }
        virtual void bun()
        {
            cout<<"Inside Base bun\n";
        }

};

class Derived : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside Derived gun\n";
        }
        void sun()
        {
            cout<<"Inside Derived sun\n";
        }
        void run()
        {
            cout<<"Inside Derived run\n";
        }

        virtual void mun()
        {
            cout<<"Inside Derived mun\n";
        }
};


int main()
{
    

    Base *bp = new Derived();   //Upcasting
   
    bp->fun();         //Base Fun
    bp->gun();         //Base Gun
    bp->sun();         //Derived Sun
    //bp->run();         //ERROR
    //bp->mun();         //ERROR         
    bp->bun();         //Base bun

    return 0;
}