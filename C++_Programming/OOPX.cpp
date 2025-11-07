#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo1;  //charateristics / Variables
        int iNo2;

        Arithematic()   //Behaviour / Function
        {
            cout<<"Inside Default Constructor\n";
            iNo1 = 0;
            iNo2 = 0;
        }

        Arithematic(int A, int B)   //Behaviour / Function
        {
            cout<<"Inside Parametrised Constructor\n";
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()   //Behaviour / Function
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }

        int Substraction()  //Behaviour / Function
        {
            int iAns = 0;
            iAns = iNo1 - iNo2;
            return iAns;
        }
}; 

int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2;

    int iRet = 0;

    iRet =aobj1.Addition();
    cout<<"Additon is:" <<iRet<<"\n";

    iRet =aobj1.Substraction();
    cout<<"Substraction is:" <<iRet<<"\n";

    return 0;
}