#include<iostream>
using namespace std;

int main()
{
    int n;
    float x,y;
    while(1)
    {
        try
       {
            cout<<"\nchoose operation\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division"<<endl;
            cin>>n;
            cout<<"\nenter two numbers\n";
            cin>>x>>y;
            if(y==0&&n==4)
            {
                throw"exception Division by zero is not allowed";
            }
            switch(n)
            {
                case 1:
                       cout<<"\nAddition of "<<x<<" and "<<y<<" is "<<x+y;
                       break;
                case 2:
                       cout<<"\nSubstraction of "<<x<<" and "<<y<<" is "<<x-y;
                       break;
                case 3:
                       cout<<"\nMultiplication of "<<x<<" and "<<y<<" is "<<x*y;
                       break;
                case 4:
                       cout<<"\nDivision of "<<x<<" and "<<y<<" is "<<x/y;
                       break;
                default:
                        cout<<"Wrong choice";
            }
       }
       catch(const char* e)
       {
        cout<<e;
       }
    }
}