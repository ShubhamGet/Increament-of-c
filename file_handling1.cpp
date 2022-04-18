#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ofile;
    ofile.open("easy1.txt");
    int number;
    int count=0;
    ofile<<"Enter the number "<<endl;
    cin>>number;
    while(number!=0)
    {
        count=count+1;
        number=number/10;
        ofile<<"\n entered numbers are "<<count<<endl;
    }
    return 0;
}

