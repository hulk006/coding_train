//dp[i]+dp[i-coins[j]];
//设N=110
//对于N来说 他的组合数
//dp[N] = dp[N-1]+dp[N-5]+dp[N-10]+dp[N-20]+dp[N-50]+dp[N-100]；错误的

//对于外循环j面额 1，5，10,20,50,100
//
//dp[n] += dp[n-cons[j]]
//

#include <iostream>
using namespace std;

long combine(int N)
{
    long dp[10000]= {0};
    dp[0]=1;
    dp[1]=1;
    int coins[6]={1,5,10,20,50,100};
    for(int j = 0;j<6 ;++j)//对于一个1来说
    {
        for(int i = 2;i <= N;++i)
        {
            if(i - coins[j] >= 0)
            {
                dp[i] = dp[i]+dp[i-coins[j]];
            }


        }
    }
    return dp[N];
}



int main()
{
    long dp[10000]= {0};
    dp[0]=1;
    dp[1]=1;
    int coins[6]={1,5,10,20,50,100};
    int N;
    //cin>>N;
    N=6;
    long a=combine(6);
    for(int i = 2;i <= N;++i)
    {
        for(int j = 0;j<6 ;++j)//对于一个1来说
        {
            int a= coins[j];
            if(i - coins[j] >= 0)
            {
                 dp[i] = dp[i]+dp[i-coins[j]];
            }


        }
    }




    cout<<dp[N];
    return 0;

}