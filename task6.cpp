#include<iostream>
using namespace std;
int size;
void colour_pattern_time();
main()
{
    cout<<"enter length of array:";
    cin>> size;
    colour_pattern_time();  
}
void colour_pattern_time()
{
    string array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int count=0;
    int count1=0;
    string name[size];
    for(int i=0;i<size;i++)
    {
        name[i]=array[i];
        if(name[i]!=array[i+1])
        {
            count1=count1+1;
        }
        count=count+2;
    }
    count1=count1-1;
    int pencle=count1*1;
    int total=count+pencle;
    cout<<"total is :"<<total;
}