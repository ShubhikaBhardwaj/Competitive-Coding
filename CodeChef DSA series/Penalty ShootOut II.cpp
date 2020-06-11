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
     string s;
     cin>>s;
     
     int ans=2*n;
     int turnA=3,turnB=3;
     int maxgoal=0;
     int curgoalA=0,curgoalB=0;
     int reqgoalA=0,reqgoalB=0;
     for(int i=0;i<2*n;i++)
     {  
         if(i%2==0)  //A shot
         {
            if(s[i]=='0')
            curgoalA++;

            turnA--;
            maxgoal=max(curgoalA,curgoalB);
            reqgoalA=maxgoal-curgoalA;

            if(reqgoalA>turnA)
            {
                ans=i;
                break;
            }

         }

        else  // B shot
        {
            if(s[i]=='0')
            curgoalB++;

            turnB--;
            maxgoal=max(curgoalB,curgoalA);
            reqgoalB=maxgoal-curgoalB;

            if(reqgoalB>turnB)
            {
                ans=i;
                break;
            }
            
        }
        
     }
     
     cout<<ans<<endl;

    } 

    return 0;
}