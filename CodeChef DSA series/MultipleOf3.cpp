#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int a,b;
        cin>>a>>b;

        int sumtillnow=a+b;
        int sumofdig=a+b;

        for(int i=0;i<n-2;i++)
        {
            int curdig=sumtillnow%10;

            sumofdig+=curdig;
            sumtillnow+=curdig;
        }
        
    if(sumofdig%3==0)cout<<"YES"<<endl;

    else cout<<"NO"<<endl;


    }

    return 0;
}