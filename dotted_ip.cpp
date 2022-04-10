#include<iostream>

using namespace std;

void DEC2BIN(int dec)  // here, DEC2BIN this a function name, it will get call when we will call by this name.
{
        // 128 = 2^7 = 8 bit
        //  64 = 2^6 = 7 bit
        //  32 = 2^5 = 6 bit
        //  16 = 2^4 = 5 bit
        //  08 = 2^3 = 4 bit
        //  04 = 2^2 = 3 bit
        //  02 = 2^1 = 2 bit
        //  01 = 2^0 = 1 bit

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

