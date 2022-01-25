#include<iostream>
using namespace std;
string sevenboom();
int array[7];
main()
{
  cout<<"enter a digits:";
  for(int i=0;i<7;i++)
  {
    cin >> array[i];    
  } 
  string result=sevenboom(); 
  cout<<result;   
}
string sevenboom()
{
  string result="there_is_no_7_digits";
  int b;
  for(int x=0;x<7;x++)
  {
    int a=array[x];
    while(a != 0)
    {
      b=a%10;
      a=a/10;
      if(b==7)
      {
        result="boom!";
        break;
      } 
    } 
  } 
  return result;
}