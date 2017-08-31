

//先点赞再看！ 来个清晰容易理解的！！！
#include<iostream>
using namespace std;

/*
把网格看做二维坐标，向下为正，向右为正：
设f(m,n)代表从坐标（0,0）到坐标（m,n）的移动方法，则
f(m,n)=f(m-1,n)+f(m,n-1)
开始为f(0,0)=0,f(0,1)=1,f(1,0)=1

进行递归运算,退出条件就是m,n至少有个为0，否则就要继续递归运算。
*/
int danamicPlan(int x,int y)
{
    int result[x+1][y+1] ;
    result[x+1][y+1] = {0};//resule表示每一个点的步数
    //result[x][y] = result[x-1][y]+result[x][y-1]
    for(int i= 0;i<=x;++i)
    {
        for(int j= 0;j<=y;++j)
        {
            if(i==0||j==0)
                result[i][j] = 1;
            else
                result[i][j] = result[i-1][j]+result[i][j-1];
        }

    }
    return result[x][y];

}
int get_ways(int x,int y){
    //if(x==0 &&y==0) return 0;
    if(x==1 &&y==0) return 1;
    if(x==0 &&y==1) return 1;
    if (x==0) return get_ways(x, y-1);
    if (y==0) return get_ways(x-1, y);
    else
        return get_ways(x-1,y)+get_ways(x,y-1);
}

int main(){
    int X,Y;
    //cin>>X>>Y;
    X=3;Y=2;
    cout<<get_ways(X,Y)<<endl;
    cout<<danamicPlan(X,Y);
    return 0;
}
