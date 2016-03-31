//Quinton Dean
//Lab - 2: Tides

/* This lab takes data from a file input that took sources from the time of day and hour and put it in a multidimensional array
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   int i,j;         //i is day counter. j is hour counter
   string day;
   int hour;
   ifstream data;
   data.open("tide.txt");
   int SIZE=7;
   int SIZE2=24;
   int count[7][24] = {0};
   if(!data.is_open())
   {
       cout << "Cannot open file";
       return 10;
   }

   data >> day >> hour;

       while(!data.eof())
       {
       if(day=="Sun")
       {
        i=0;
       }
       if(day=="Mon")
       {
        i=1;
       }
       if(day=="Tue")
       {
        i=2;
       }
       if(day=="Wed")
       {
        i=3;
       }
       if(day=="Thu")
       {
        i=4;
       }
       if(day=="Fri")
       {
        i=5;
       }
       if(day=="Sat")
       {
        i=6;
       }
       count[i][hour]++;
       data >> day >> hour;
       }




    data.close();
    cout << "Hour" << '\t' << "Sun" << setw(5) <<"Mon" << setw(5)<< "Tue" << setw(5)<< "Wed" << setw(5)<< "Thu" << setw(5)<< "Fri" << setw(5) << "Sat" << '\n';
    for(j=0; j<SIZE2; j++)
    {
        cout << j << '\t' << count[0][j] << setw(5) << count[1][j] << setw(5) <<count[2][j] << setw(5)
        << count[3][j] << setw(5) << count[4][j] << setw(5) << count[5][j] << setw(5) << count[6][j]  << '\n';
    }
}
