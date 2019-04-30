#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>

int main()
{
  int flight[10][10],src,dest;
  string  time[10][10];


  flight[0][1]=1;
  flight[0][2]=1;
  flight[0][3]=1;
  flight[1][0]=1;
  flight[1][2]=1;
  flight[1][3]=1;
  flight[2][0]=1;
  flight[2][1]=1;
  flight[2][3]=1;
  flight[3][1]=1;
  flight[3][2]=1;


  time[0][1]="11am to 4am" ;
  time[0][2]="12pm to 8pm";
  time[0][3]="3am to 7pm";
  time[1][0]="4am to 12:50am";
  time[1][2]="5:30pm to 9:45pm";
  time[1][3]="2:15pm to 4:50pm";
  time[2][0]="7:45am to 11:30pm ";
  time[2][1]="6:25am to 7:45pm";
  time[2][3]="3:20pm to 9:55pm ";
  time[3][1]="10:20am to 7:50pm";
  time[3][2]="3:40pm to 10:45pm ";

char ch='y';
  while(1)
 {
    cout<<endl<<endl<<"-----LIST OF AIRPORTS-----"<<endl;
    cout<<"1.Pune = 0 "<<"\n"<<"2.Mumbai = 1 "<<"\n"<<"3.Banglore = 2 "<<"\n"<<"4.Delhi = 3"<<endl;

    cout<<"Enter the Source City(No.) and Destination(No.) : "<<endl;
    cin>>src;
    cin>>dest;

   if(flight[src][dest]==1)
   {
      cout<<"Flight is available from ";
      cout<<time[src][dest]<<endl;
   }
   else
   {
     cout<<"Flight is not available "<<endl;
   }


    cout<<"If u want to exit press 'y' else press other character "<<endl;
    cin>>ch;
    if(ch=='y')
        exit(0);
 }
 return 0;
}


























