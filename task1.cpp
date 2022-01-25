#include<iostream>
using namespace std;
string array;
void checker(string array);
main()
{
    cout<<"enter a value:";
    cin >> array;
    checker(array);
    
     
}
void checker(string array)
{
    int count=0;
    int i=0;
    while(array[i] != '\0')
    {
        count=count+1;
        i++;
    }
    if(count%2==0)
    {
        cout<<"true";
    }
    else 
    {
        cout<<"false:";
    }
}