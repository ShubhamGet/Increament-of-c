#include<iostream>
using namespace std;
void divide(int x,int y)
{
    try
    {
        if(y!=0)
        {
            int z=x/y;
            cout<<"\n Div="<<z;
        }
        else
        {
            throw "Don't put zero in denominator";
        }
    }
    catch(const char *s)
        {
            cout<<s;
        }
}
int main()
{
    int a,b;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    divide(a,b);
    return 0;

}
