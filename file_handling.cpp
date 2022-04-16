#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("easy.txt");
    ofile<<"Hiiiiiiiiiiiiiiiiiii"<<endl;
    ofile.close();
    return 0;
}
