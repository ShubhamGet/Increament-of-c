#include<iostream>

using namespace std;

void DEC2BIN(int dec)  
{

  for (int i = 128; i != 0; i=i>>1)
  {
    if (dec & i)
      cout<<"1";
    else
      cout<<"0";
  }

}


int main()
        {

        //clrscr();

        //DECLARATIONS
        int i,j;
        int dec[4];
        int bin[8]={128,64,32,16,8,4,2,1};

        //INPUT
        cout<<"Enter the IP Address: ";
        for(i=0;i<4;i++)
        cin>>dec[i];

        //TRANSLATION
        cout<<"The ip address is: "<<dec[0];
        cout<<"."<<dec[1]<<"."<<dec[2]<<"."<<dec[3]<<endl;

        for(i=0; i<4; i++)
                {
                DEC2BIN(dec[i]);// function calling

                if(i!=3)
                cout<<".";
                }

        //getch();
        return 1;
        }

