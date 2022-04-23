#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;

class Student
{
    private:
    char roll[10];
    char name[20];

    public:
    void getDetails() // it's function 1
    {
        cout<<"Enter Student Details"<<endl;
        cout<<"====================="<<endl;
        cout<<"Enter Student Roll no"<<endl;
        cin>>roll;
        cout<<"Enter Student Name"<<endl;
        cin>>name;
    }
    void showDetails() // it's function 2
    {
        cout<<"Student Details"<<endl;
        cout<<roll<<endl;
        cout<<name;
    }
};
int main()
{
    Student s1;
    Student s2;

    s1.getDetails(); // taking details from student

    /* Write s1 object to Student.txt file */

    ofstream fout("Easy1.txt");  //open file fro writing
    fout.write((char*)&s1,sizeof(s1));
    fout.close();

    cout<<"\n The data got saved in file press any key to save \n";

    ifstream fin("Easy1.txt");
    fin.read((char*)&s2,sizeof(s2));
    fin.close();

    cout<<"\n Data read from file\n";
    s2.showDetails();

    return 0;
}
