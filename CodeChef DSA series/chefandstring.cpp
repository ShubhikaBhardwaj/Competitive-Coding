#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;

       int n=s.length();
       int pairs=0;
       for(int i=0;i<n;i++)
       {   
          if(i+1<n)
           {
           if(s[i]=='x'&&s[i+1]=='y')
             {
                 pairs++;
                 i++;
             }

            else if(s[i]=='y'&&s[i+1]=='x')
            {
                pairs++;
                i++;
            }
           
           }

       }

       cout<<pairs<<endl;

    }

    return 0;
}