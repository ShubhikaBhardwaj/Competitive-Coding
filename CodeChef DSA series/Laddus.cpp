#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int n;
      cin >> n;
      string nat;
      cin >> nat;

      int score = 0;
      string arr;
      
      
      for (int i = 0; i <=n; i++)
     	{
	      getline(cin,arr);
    
	  if (arr=="CONTEST_HOSTED")
	    score += 50;

	  else if (arr.substr(0,9)== "BUG_FOUND")
	    score +=stoi(arr.substr(10));
	    
	  else if(arr=="TOP_CONTRIBUTOR")
	    score+=300;
	    
	  else if(arr.substr(0,11)=="CONTEST_WON")
	    {  int rank=stoi(arr.substr(12));
	       score+=300;
	       int bonus=0;
	       if(rank<20)
	       bonus=20-rank;
	       
	       score+=bonus;
	       
	     
	    }
	    
	   // cout<<score<<endl;
	    
	  }//for 
       
       int ans;
      // cout<<score<<endl;
       if(nat=="INDIAN")
       ans=score/200;
       
       else
       ans=score/400;
       
       cout<<ans<<endl;



	    }//while

	    return 0;
	}
