/*
Define a structure Temp to store min and max temperature of a day.
a.  Define a function to calculate average of min temperature of several days of some city
      i.   int minAvg(struct Temp d[], int totalDays);
b.  Define a function to calculate average of max temperature of several days of some city
      i.   int maxAvg(struct Temp d[], int totalDays);
*/
#include<iostream>
#include<conio.h>
#include<string.h>
int minAvg(struct Temp d[], int totalDays);
using namespace std;
struct Temp
{
    int min, max;
};
int minAvg(struct Temp d[], int totalDays)
{
    int sum=0;
    for(int i=0;i<totalDays;i++)
        sum=sum+d[i].min;
    return sum/totalDays;
}
int maxAvg(struct Temp d[], int totalDays)
{
    int sum=0;
    for(int i=0;i<totalDays;i++)
        sum=sum+d[i].max;
    return sum/totalDays;
}
int main()
{
    struct Temp t[5];
    int T,Q;
    cout<<"Enter minimum temperature of 5 days :- "<<endl;
    for(int i=0;i<5;i++)
        cin>>t[i].min;
    T=minAvg(t,5);
    cout<<endl<<"Average minimum temperature of 5 days is "<<T<<endl;

    cout<<endl<<"Enter maximum temperature of 5 days :- "<<endl;
    for(int i=0;i<5;i++)
        cin>>t[i].max;
    Q=maxAvg(t,5);
    cout<<endl<<"Average maximum temperature of 5 days is "<<Q;
    getch();
}

