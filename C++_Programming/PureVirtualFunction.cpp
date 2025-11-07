#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        int Additon(int a, int b) //concrete
        {
            return a*b;
        }
        virtual int Substraction(int a, int b) = 0; //Abstract 

};

class Derived : public Base     //ERROR  it should contain the logic/body of substraction
{
    public:
        int x;

        
};


int main()
{
    

    

    return 0;
}