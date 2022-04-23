#include<iostream>
using namespace std;
#include<fstream>
#include<string>

#define PERSONS_LIMIT 50

ofstream fout("Details1.txt");
int countPersons=0;

class Persons
{
      public:
      int Id;
      char Name[20];
      int Age;
      char Dob[20];
      char Position[30];
      char Gender;
};

Persons obj[PERSONS_LIMIT];

void input()
{
    if(countPersons<PERSONS_LIMIT)
    {
        cout<<"\n Enter id(number):";
        cin>>obj[countPersons].Id;
        cout<<"\n Enter Name(20 characters):";
        cin>>obj[countPersons].Name;
        cout<<"\n Enter Age(number):";
        cin>>obj[countPersons].Age;
        cout<<"\n Enter DOB(dd-mm-yy):";
        cin>>obj[countPersons].Dob;
        //cout<<"\n Enter Position:";
        //cin>>obj[countPersons].Position;
        cout<<"\n Enter Gender(M/F):";
        cin>>obj[countPersons].Gender;
        countPersons++;
    }
    else
    {
        cout<<"\n Error : Limit is only"<<PERSONS_LIMIT;
    }
}
void printAll()
{
    fout<<"\n***** ****** Printing All Records ***** ******";
    fout<<"\n Total number of persons:"<<countPersons<<endl;
    for(int i=0;i<countPersons;i++)
    {
        //cout<<"\n Id :"<<obj[i].Id;
        fout<<"\n Name :"<<obj[i].Name;
        fout<<"\n Age :"<<obj[i].Age;
        fout<<"\n DOB :"<<obj[i].Dob;
        //cout<<"\n Position :"<<obj[i].Position;
        fout<<"\n Gender :"<<obj[i].Gender;

    }
}
void printbyAge()
{
    fout<<"\n***** ***** Printing all Record by Age ****** *******:";
    int count50plus=0;
    int count40plus=0;
    int lessthen40=0;

    for(int i=0;i<countPersons;i++)
    {
        if(obj[i].Age>50)
        count50plus++;
        else if(obj[i].Age>40)
        count40plus++;
        else
        lessthen40++;
    }
    fout<<"\n Persons more than 50 :"<<count50plus;
    fout<<"\n Persons more than 40 :"<<count40plus;
    fout<<"\n Persons less than 40 :"<<lessthen40;
}
void printSexCount()
{
    fout<<"\n ***** ***** Printing all Records by Sex count:";

    int malecount;
    int femalecount;

    for(int i=0;i<countPersons;i++)
    {
        if(obj[i].Gender=='M')
        malecount++;
        else
        femalecount++;
    }
    fout<<"\n Number of Male :"<<malecount;
    fout<<"\n Number of Female:"<<femalecount;
}
int main()
{
    Persons p;
    int choice;

    while(choice!=0){
        cout<<"\n\t\t\t Welcome in Bar";
        cout<<"\n \t\t\t ==============";
        cout<<"\n\nProgram Menu:"<<endl;
        cout<<"\n 1 Input Records";
        cout<<"\n 2 Print all Records";
        cout<<"\n 3 Print Age";
        cout<<"\n 4 Print by sex count";
        cout<<"\n Enter your choice :";
        cin>>choice;

        switch(choice)
        {
           case 1:
           input();
           break;
           case 2:
           printAll();
           break;
           case 3:
           printbyAge();
           break;
           case 4:
           printSexCount();
           break;
           default:
           cout<<"\n Error: Invalid Selection:";
        }
    }
    return 0;
}
