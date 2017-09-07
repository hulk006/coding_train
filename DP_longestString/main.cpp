#include<iostream>
#include <math.h>
#include <algorithm>
#include <cstring>

using namespace std;
//一个精简版的代码
int main()
{

    string A;
    A="cacccca";
    int n=7;
    string B;
    B= "aaacca";
    int m = 6;

    int i,j;
    if (0 == m || 0 == n)
    {
        return 0;
    }
/*************getdp[][]******************/
    int dp[m][n];
    //对第一行第一列赋值 0或者1
    for (i = 0; i < m; i++)
    {
        if (B[i] == A[0])
        {
            dp[i][0] = 1;
        }
        else
            dp[i][0] = 0;
    }

    for (j = 1; j < n; j++)
    {
        if (B[0] == A[j])
        {
            dp[0][j] = 1;
        }
        else
            dp[0][j] = 0;
    }

    //dp[i][j] = dp[i - 1][j - 1] + 1;
    for (i = 1; i < m; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (B[i] == A[j])
            {




                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
                dp[i][j] = 0;
        }
    }

    int max = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (dp[i][j] > max) {
                max = dp[i][j];
            }
        }
    }
    return  max;
}
//一个精简版的代码
/*
 * #include<algorithm>
#include<cstring>
using namespace std;

class LongestSubstring {
public:
    int findLongest(string A, int n, string B, int m)
    {
        int dp[n][m];
        for(int i=0;i< n;++i)//对于A
        {
            for(int j=0;j< m;++j)
            {
            	dp[i][j] = 0;
            }
        }
		int max = 0;
        for(int i=0;i< n;++i)//对于A
        {
            for(int j=0;j< m;++j)
            {

                if(A[i] == B[j])
                {
                    if(i==0||j==0)//第一行和第一列
                    {dp[i][j]=1;}

                    else
   						dp[i][j] = dp[i - 1][j - 1] + 1;

                }
                max = dp[i][j] > max ? dp[i][j]:max;//最大值

             }
        }
        return max;


    }

};
 */
