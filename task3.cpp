#include<iostream>
using namespace std;
void testjackpot();
string array[4];
main()
{
    for(int i=0;i<4;i++)
    {
        cout<<"enter a character:";
        cin >> array[i];
    } 
    testjackpot();
}
void testjackpot()
{
    bool test;
    for(int x=0;x<3;x++)
    {
        for(int i=1;i<4;i++)
        {
            if(array[x]==array[i])
            {
               test=true; 
            }
            else 
            {
                test =false;
                break;
            }
        }
    }
    cout<<test;
}