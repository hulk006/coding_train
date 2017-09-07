/*

先说下思路，一开始只是考虑到11,21,32,54,11,22这种情况的，设想的是如果遇到比前一个大的就
加一，如果遇到比前面小的就初始化为1，弄一个数组存这些数，但是如果遇到这种情况就不行了，
例如：11，21，32，54，33，22，11，这样的话，会导致答案错误。
解决办法的是弄两个数组，一个数组按照正常的顺序遍历，另一个数组倒序遍历，然后比较两个数组
的值，取较大的值即可。
*/

#include<iostream>
using namespace std;

int main()
{
    int N=10;
    cin>>N;
    int A[N];
    int front[N] ,back[N];

    for(int i=0;i<N;++i)
    {
        cin>>A[i];
        front[i] = 1;
        back[i]=1;
    }
    for(int i=1;i<N;++i)
        {
        if(A[i]>A[i-1])
            {
            front[i]=front[i-1]+1;
        }
    }
     for(int i=N-2;i>=0;--i)
        {
        if(A[i]>A[i+1])
            {
            back[i]=back[i+1]+1;
        }
    }
    int sum=0;

     for(int i=0;i<N;++i)
     {
         back[i]=back[i] > front[i]? back[i]:front[i];//取比较大的
         sum+= back[i];
     }

    cout<<sum;
    return 0;
}