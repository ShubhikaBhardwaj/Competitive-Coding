#include<bits/stdc++.h>
using namespace std;
    struct man
    { public:
        int h,n;
    };
    
class Solution {
    public:

    static bool compare(struct man a,struct man b)
    {int x,y;
     
        
       if(a.h<b.h)
           return true;
        return false;
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
       vector<struct man> arr;

       for(int i=0;i<people.size();i++)
       {
           struct man m;
           m.h=people[i][0];
           m.n=people[i][1];
           arr.push_back(m);
       } 
     
     sort(arr.begin(),arr.end(),compare);
     
        //cout<<"HI";
  //  for(int j=0;j<arr.size();j++)
      for(int i=0;i<arr.size();i++)
     {
       int steps=arr[i].n;

       int k=0;
       int index=0;

       while(index<i&&k<steps)
       {  if(index>=0)
           if(arr[index].n<=arr[i].n)
           {
              k++;
           }
           index++;
       }

       // cout<<"HI";
       struct man M;
       M.h=arr[i].h;
       M.n=arr[i].n;

       arr.erase(arr.begin()+i);

         if(index>=0)
       arr.insert(arr.begin()+index,M);

         else
            arr.push_back(M);
       
        //cout<<"HI";

     }
        

     vector<vector<int>> ans;
       for(int i=0;i<arr.size();i++)
       {
           vector<int> sub;
           sub.push_back(arr[i].h);
           sub.push_back(arr[i].n);

           ans.push_back(sub);
       } 

    return ans;

    }
};