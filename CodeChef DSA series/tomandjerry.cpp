#include<bits/stdc++.h>
using  namespace std;

long long int  calwin(long long int  t,long long int  j)
{
   
   long long int dp[t+1][j+1]={0};

   for(long long int i=1;i<t+1;i++)
        dp[i][1]=0;

   for(long long int i=1;i<j+1;i++)
       {
           if((i&1)==0)//even
            dp[1][i]=1;

            else dp[1][i]=0; //odd
       } 
     
  for(long long int i=2;i<t+1;i++)
  {
      for(long long int k=2;k<j+1;k++)
      {
          
         if(((i&1)==0) && ((k&1)==0))
           dp[i][k]+=dp[i/2][k/2];

         else if(((i&1)==1) && ((k&1)==0))
           dp[i][k]+=1;

        
      }
  }

  long long int ans=0;

  for(long long int i=1;i<j+1;i++)
  ans+=dp[t][i];

  return ans;

}


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int n;
       cin>>n;
       
       long long int totalwins;
      
       totalwins=calwin(n,n);

    
    cout<<totalwins<<endl;


   }

    return 0;
}