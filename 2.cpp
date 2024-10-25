// swap two function using parameterized constructor
#include<iostream>
using namespace std;

class A{
    public:
       int a;
       int b;
       int temp;
       
       A(int x, int y)
       { 
           a=x;
           b=y;
           
           cout<<"Before Swap : "<<a<<" "<<b<<endl;
           
           temp=a;
           a=b;
           b=temp;
           
           cout<<"After Swap : "<<a<<" "<<b<<endl;
       }
};

int main()
{ 
    A ob(5,6);
}
