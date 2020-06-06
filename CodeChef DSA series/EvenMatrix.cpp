
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int mat[n][n];
        int k=1;
        int left=0,right=n-1,top=0, bottom=n-1;

        while(left<right&& top<bottom)
        {
            for(int i=left;i<=right;i++)
            {mat[top][i]=k++;}

            top++;

            for(int i=top;i<=bottom;i++)
            {mat[i][right]=k++;}

            right--;

            for(int i=right;i>=left;i--)
            { mat[bottom][i]=k++;}
            }

            bottom--;

            for(int i=bottom;i>=top;i--)
            { mat[i][left]=k++;
            }
              
             left++; 
        }

        //print mat

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}