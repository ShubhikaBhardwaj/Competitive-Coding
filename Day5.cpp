class Solution {
public:
    struct man
    {
        int h,n;
    };

    bool compare (man a man b)
    {
        return a.h<=b.h;
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
       vector<man> arr;

       for(int i=0;i<people.size();i++)
       {
           man m;
           m.h=arr[i][0];
           m.n=arr[i][1];
           arr.push_back(m);
       } 
     
     sort(m.begin(),m.end());
     
     for(int i=0;i<arr.size();i++)
     {
       int steps=arr[i].n;

       int k=0;
       int index=i+1;

       while(index<arr.size()&&k<steps)
       {
           if(arr[index]>=arr[i])
           {
              k++;
           }
           index++;
       }

       man M;
       M.h=arr[i].h;
       M.n=arr[i].n;

       arr.erase(arr.begin()+i);

       arr.insert(arr.begin()+index,M);

       

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