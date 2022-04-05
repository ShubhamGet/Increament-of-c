#include<iostream>
using namespace std;
void swap_value(int *,int *);
int main()
{
    int num1,num2;
    cout<<"\nEnter first number :"<<endl;
    cin>>num1;
    cout<<"\nEnter second number :"<<endl;
    cin>>num2;
    cout<<"\nBefore swapping :"<<endl;
    cout<<"\nNum1="<<num1<<"\nNum2="<<num2;
    // function calling
    swap_value(&num1,&num2);
    cout<<"\nAfter swapping :"<<endl;
    cout<<"Num1="<<num1<<"\nNum2="<<num2;
}
// function implementation
void swap_value(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

