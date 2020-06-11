#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n
       cin>>n;
       int maxprofit=0;
       for(int i=0;i<n;i++)
       {
           int store,ppl,price;
           int profit;
           cin>>store>>ppl>>price;

           store++;

           int customer;
           
           if(ppl%store==0)
           customer=ppl/store;

           else
           {
               customer=floor(ppl/store);
           }
           
           profit=customer*price;

           maxprofit=max(maxprofit,profit);

       }

       cout<<maxprofit<<endl;
   }

    return 0;
}