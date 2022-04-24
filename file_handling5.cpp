/* Program to store data  in a file super market */
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>


using namespace std;
    // File name
ofstream fout("myfile.txt");

class supermarket
{
    char item_code[10];
    char quantity[10];
    char price[1000];
    public:
    void readdata();
    void writedata();
};
/* Function to write data to file  */
void supermarket :: writedata()
{

    fout<<setw(8)<<"ITEM CODE"<<setw(10)<<"QUANTITY"<<setw(8)<<"PRICE"<<endl;
    fout<<setw(8)<<item_code<<setw(8)<<quantity<<setw(8)<<price;
}

/* Function to write data to file  */

void supermarket :: readdata()
{
    cout<<"\n Enter Item Code ";
    cin>>item_code;
    cout<<"\n Enter quantity  ";
    cin>>quantity;
    cout<<"\n Enter price  ";
    cin>>price;
}

int main()
{

    int i,n;
    if(!fout)        // checks for success  in opening file
    {
        cout<<"Error in opening file ";
        cin.get();
        exit(1);
    }
    supermarket s;
    //int i =1;
    cout<<"\n details for supermarket  ..... ";
    while(i<=5)
    {
    s.readdata();  // read data about data
    s.writedata(); // write data to file
    i++;
    }
    return 0;
}



