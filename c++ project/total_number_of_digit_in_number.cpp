#include<iostream>
using namespace std;

int main()
{
   int num, a=0;
   cout<<"Enter the Number: ";
   cin>>num;
   while(num != 0)
   {
      a++;
      
      num = num/10;
   }
   cout<<"\nTotal Digits in a number= "<<a;
   return 0;
}