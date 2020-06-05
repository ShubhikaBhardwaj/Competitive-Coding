#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int collection=0;
        int flag=0;
        for(int i=0;i<n;i++)
           {
               int x;
               cin>>x;

               int curchange=x-5;

               if(curchange>collection)
               {flag=1;break;}

               else
               { collection-=curchange;
               }

               collection+=5;
           }

           if(flag==1) cout<<"NO"<<endl;

           else cout<<"YES"<<endl;
    }

    return 0;
}
