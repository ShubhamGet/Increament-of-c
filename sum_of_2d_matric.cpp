#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;

    cout<<"\n Enter 1st Array Element :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            // take element
            cin>>a[i][j];
        }
    }
    cout<<"\n Entered 1st Array Element :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            // Display element
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n Enter 2nd  Array Element :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            // take element
            cin>>b[i][j];
        }
    }
    cout<<"\n Entered 2nd Array Element :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            // Display element
            cout<<"\t"<<b[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n Sum of 2-D Matrix :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;i++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<"\n Sum of two array element is :"<<c[i][j];
        }
    }
    return 0;
}

