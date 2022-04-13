#include<iostream>
#include<stdexcept>  // it will use for run_time error
using namespace std;
// defining the function definition
int divide(int num,int demo)
{
    // if denominator will be 0
    // throw run_time error
    if(demo==0)
    {
        throw runtime_error("Math Error: enter number can't be divide by 0");
    }
    // otherwise return the result of division
    return (num/demo);
}
int main()
{
    int nume,denimi,result=0;
    cout<<"enter the nume "<<endl;
    cin>>nume;
    cout<<"enter the denimi "<<endl;
    cin>>denimi;
    try
    {
        result=divide(nume,denimi);
        cout<<"The quotient is "<<result<<endl;
    }
    catch(runtime_error *e)
    {
        cout<<"Exception is occurred "<<e;
    }
    return 0;
}
