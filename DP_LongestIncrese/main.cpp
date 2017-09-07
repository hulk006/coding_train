#include <iostream>
#include <algorithm>
using namespace std;

    int main()
    {
        int n=7;
        203,39,186,207,83,80,89,237,247;
        int A[]={ 2,1,4,3,1,5,6};
       int dp[n];//表示包含A[i]的最长递增数列，重要××××
       dp[0] = 1;
       for(int i = 1; i < n ; ++i)
            dp[i] = 1;
       for(int i = 1; i < n ; ++i)
       {
           int max = 1;
           int a = 1;
            for(int j = 1; j < i ; ++j)
            {
             	if(A[i] > A[j] && dp[i]<dp[j]+1)//为了找到包含AI的最长递增数列
                {
                  dp[i] = dp[j]+1;  //包含A[i]的递增数列，最长为多少
                }

            }

       }
        sort(dp, dp+n);
        std::cout<<dp[n-1];
       return dp[n-1];





    }
