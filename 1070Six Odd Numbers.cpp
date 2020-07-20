#include<iostream>
using namespace std;
int main()
{
   int n,count=0;
   cin>>n;
   if(n%2!=0)
   {
       for(int i=n; ;i+=2)
       {
           cout<<i<<endl;
           count++;
           if(count==6)
            break;
       }
   }
   else
   {
       for(int i=n+1; ;i+=2)
       {
           cout<<i<<endl;
           count++;
           if(count==6)
            break;
       }
   }
}
