#include<iostream>
using namespace std;
int ali[3];
void changer();
main()
{
    cout<<"enter a value:";
    for(int i=0;i<3;i++)
    {
        cin>>ali[i];
    }
    changer();
    
}
void changer()
{
    int number=0;
    number=ali[0];
    int num2=0;
    num2=ali[1];
    int num3=ali[2];
    int trans=0;
    cout<<"enter transformation value:";
    cin>>trans;
    for(int i=0;i<3;i++)
    {
        number=ali[0];
        num2=ali[1];
        num3=ali[2];
        for(int x=1;x<=trans;x++)
        { 
            if(number%2==0)
            {
                number=number-2;
            }
            if(number%2!=0) 
            {
                number=number+2;

            }
            if(num2%2==0)
            {
                num2=num2-2;
            }
            if(num2%2!=0) 
            {
                num2=num2+2;

            }
            if(num3%2==0)
            {
                num3=num3-2;
            }
            if(num3%2!=0) 
            {
                num3=num3+2;
            }
            
            
        }
        
    }
    cout<<"array:  "<<number<<" "<< num2 <<" "<< num3;
    
}