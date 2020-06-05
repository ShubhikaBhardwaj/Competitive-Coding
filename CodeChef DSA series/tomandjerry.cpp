#include<bits/stdc++.h>
using  namespace std;

long long calwin(long t,long j)
{
   if(t&1==0 && j&1==0)
   {
      return calwin(t/2,j/2);
   }
 
 
   else if(t&1==1 && j&1==1)
   {
     return 0;   
   }
   
   else if(t&1==0 && j&1==1)
   {
       return 0;
   }
   
   else if(t&1==1 && j&1==0)
   {
       return 1;
   }


}


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       
       int totalwins=0;
       for(int i=1;i<=n;i++)
       {
          totalwins+=calwin(n,i);

       }
    cout<<totalwins<<endl;


   }

    return 0;
}