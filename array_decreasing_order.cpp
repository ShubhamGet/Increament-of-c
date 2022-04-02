// print array in Dereasing order

#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,n; // here, i used for array as named and n for take the size of array
    cout<<"\n Enter size of array ";
    cin>>n;
    cout<<"\n Enter array element "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Entered array element "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    // process of dereasing order
    cout<<"\n Array element in Dereasing order "<<endl;
    for(i=5;i>=0;--i)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}
