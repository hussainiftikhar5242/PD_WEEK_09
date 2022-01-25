#include<iostream>
using namespace std;
void checker(string array1,string array2);
string array1;
string array2;
main()
{
    cout<<"enter  character:"<<endl;
    cin>>array1;
    cout<<"enter  character:"<<endl;
    cin>>array2;
    checker(array1,array2);
}
void  checker(string array1,string array2)
{
    int count=0;
    int i=0;
    while(array1[i] != '\0')
    {
        int x=0; 
        while(array2[x] != '\0')
        { 
            if(array1[i] == array2[x])
            {
                array2[x]='0';
                count=count+1;
                break;
            }
            x++;
        }
        i++;
    } 
    cout<<"count:"<<count;    
}