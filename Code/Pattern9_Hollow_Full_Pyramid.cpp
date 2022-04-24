#include<iostream>
using namespace std;

int main()
{
    int n=5, k=0;

    for(int row =1; row<=n; row++)
    {
        for(int col=1; col<=n+row; col++)
        {
            if(col == n-row+1 || col == n-1+row)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
                if(row==n)
                {
                    if(col== row +2)
                    {
                        cout<<"*";
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}