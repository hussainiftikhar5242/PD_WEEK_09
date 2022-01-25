#include<iostream>
#include<string>
using namespace std;
string movie[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
string pin[4];
void danceconvert();
main()
{
    cout<<"enter 4 digit pin:";
    for(int i=0;i<4;i++)
    {
        cin>>pin[i];
    }
    danceconvert();
}
void danceconvert()
{
    int i=0;
    int  count=0;
    int sum;
    while(pin[i] != "\0")
    { 
        if(pin[i]>="0")
        {
            if(pin[i]=="9")
            {
                pin[i]="0";
                sum=0+i;
                pin[i]=movie[sum];
                sum=0;
            }
            else 
            {
                sum=stoi(pin[i])+i;
                pin[i]=movie[sum];
                sum=0;
            }       
        }
        else 
        {
            count=count+1;
            cout<<count<<endl;
        }
        
        i++;
    }
    if(count==0)
    {
        for(int i=0;i<4;i++)
        {
            cout<<pin[i]<<",";
        }
    }
    else 
    {
        cout<<"invalid string:";
    }

}