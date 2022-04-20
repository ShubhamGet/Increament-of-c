#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int i,j,sum=0;

    cout<<"\n Enter Array Element :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            // take element
            cin>>a[i][j];
        }
    }
    cout<<"\n Entered Array Element :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            // Display element
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    // sum of daigonal
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i]==a[j])
            {
                sum=sum+a[i][j];
                cout<<"Sum of Diaganl Matrix is :"<<sum;
            }
        }
    }
    return 0;
}
