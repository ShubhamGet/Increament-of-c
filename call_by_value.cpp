#include<iostream>
using namespace std;
void swap_value(int,int );
int main()
{
    int num1,num2;
    cout<<"\n Enter first number :"<<endl;
    cin>>num1;
    cout<<"\n Enter second number :"<<endl;
    cin>>num2;
    cout<<"\n Before swapping :"<<endl;
    cout<<"Num1="<<num1<<"\n"<<"Num2="<<num2;
    // function calling
    swap_value(num1,num2);
}
// function implementation
void swap_value(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"\n After swapping "<<endl;
    cout<<"Num1="<<x<<"\n"<<"Num2="<<y;

}
