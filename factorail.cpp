#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}
// function implementation
int main()
{
    int num,factorail;
    cout<<"\n Enter a number :"<<endl;
    cin>>num;
    // function calling
    factorail=fact(num);
    cout<<"\n Factorial of number is :"<<factorail;
}
