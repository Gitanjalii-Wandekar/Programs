#include<iostream>
using namespace std;
class Base
{
    public:
        int i, j;

        void fun()
        {
            cout<<"Inside Fun";
        }

        void gun()
        {
            cout<<"Inside Gun";
        }

        virtual void sun()
        {
            cout<<"Inside Sun";
        }

        virtual void bun()
        {
            cout<<"Inside Bun";
        }

};

class Der : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside Gun";
        }

        void sun()
        {
            cout<<"Inside Sun";
        }

        void run()
        {
            cout<<"Inside Run";
        }

        virtual void mun()
        {
            cout<<"Inside Mun";
        }
};

int main()
{
    Base *bp1 = new Base();
    Base *dp1 = new Der();
    Base *bp2 = new Der();
    Base *dp2 = new Base();

    cout<<sizeof(Base);
    cout<<sizeof(Der);

    bp2->fun();
    bp2->gun();
    bp2->sun();
    //bp2->run();
    //bp2->mun();
    bp2->bun();

    return 0;
   

}