#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"How many elements?\n";
   cin>>a;
   int ar[a];
   cout<<"Enter the elements \n";
   for(int i=0;i<a;i++)
    cin>>ar[i];
   cout<<"What you want to search \n";
   int b,c=0;
   cin>>b;
   for(int i=0;i<a;i++)
   {
       if(ar[i]==b)
       {
           cout<<"element found at\n"<<i+1;
           c++;
       }
   }
   if(c==0)
   {
       cout<<"Element not found\n";
   }
}
