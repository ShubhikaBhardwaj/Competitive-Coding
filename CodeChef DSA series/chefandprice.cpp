#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;

      int *arr=new int[n];
      int ans=0;

      for(int i=0;i<n;i++)
      {
          cin>>arr[i];

          if(arr[i]>k)
          ans+=(arr[i]-k);
      }
        
      cout<<ans<<endl;

    }

    return 0;
}