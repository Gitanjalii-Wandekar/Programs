#include<iostream>
using namespace std;
class Base
{
    public:
        int i,j,k;
        static int k;
        Base()
        {
            i=10;
            j=20;
        }
        void fun()
        {
            cout<<"Base Fun";
        }
};
int Base::k=11;

class Derived: public Base
{
    public:
        int x, y;
        Derived()
        {
            x=50;
            y=60;
        }
        void gun()
        {
            cout<<"Derived Gun";
        }
};
int main()
{
    Base bobj;
    Derived dobj;
    cout<<sizeof(bobj);
    cout<<sizeof(dobj);
    cout<<bobj.i;
    return 0;
    
}