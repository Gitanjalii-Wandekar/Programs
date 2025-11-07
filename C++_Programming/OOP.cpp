#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo1;  //charateristics / Variables
        int iNo2;

        Arithematic()   //Behaviour / Function
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Arithematic(int A, int B)   //Behaviour / Function
        {
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

    int iRet = 0;

    iRet =aobj1.Addition();
    cout<<"Additon is:" <<iRet<<"\n";

    iRet =aobj1.Substraction();
    cout<<"Substraction is:" <<iRet<<"\n";

    return 0;
}