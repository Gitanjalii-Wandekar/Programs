#include<iostream>
using namespace std;
class Base
{
   void fun()
   {
        cout<<"inside base fun\n";

   }

};

class Derived : public Base
{
    public:
        int x;
        
        void Gun()
        {
            cout<<"inside Derived Gun\n";
        }

};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of Base class object:" <<sizeof(bobj)<<"\n";
    cout<<"Size of Derived class object:" <<sizeof(dobj)<<"\n";



    return 0;
}