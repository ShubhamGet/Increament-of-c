#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    char rollno[20];
    char class_name[20];

    ofstream fout("Student.txt");

    cout<<"\n Enter name "<<endl;
    cin.getline(name,15);
    cout<<"\n Enter rollno "<<endl;
    cin.getline(rollno,15);
    cout<<"\n Enter class name "<<endl;
    cin.getline(class_name,15);
    fout<<name<<"\n"<<rollno<<"\n"<<class_name<<endl;
    fout.close();
    return 0;
}
