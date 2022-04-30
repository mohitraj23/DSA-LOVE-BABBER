#include <iostream>
using namespace std;

int main() {
int n = 5;
  for(int row = 1 ; row <= n ; row++)
    {
      if(row == 1)
      {
        for(int j = 1 ; j <= 2 * n ; j++)
          {
            cout<<"*";
          }
      }
      else{
        for(int j = 1 ; j <= n-row+1 ; j++)
          {
            cout<<"*";
          } 
        for(int j = 1 ; j<= 2*row-2 ; j++)
          {
            cout<<" ";
          }
        for(int j = 1 ; j <= n-row+1 ; j++)
          {
            cout<<"*";
          } 
      }
      cout<<endl;
      }  
      for(int row = 1; row<= n ; row++)
        {
          if(row == n)
          {
          for(int j = 1 ; j <(n/2)-1 ; j++)
          {
            cout<<"*";
          }
          }
          for(int j = 1; j<= row ; j++)
            {
              cout<<"*";
            }
          for(int j = 1; j<= 2 *n - 2 * row ; j++)
            {
              cout<<" ";
            }
          for(int j = 1; j<= row ; j++)
            {
              cout<<"*";
            }
         cout<<endl; 
        }
    
  return 0;
}