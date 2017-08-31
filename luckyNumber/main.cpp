#include <iostream>
#include<string.h>
#include <math.h>
#include <bitset>
#include <sstream>
using namespace std;
int get10(int n)
{
    stringstream ss;
    ss<<n;
    string s;
    ss>>s;
    int length = s.size();
    int he=0;
    int temp=n;
    for(int i=length-1;i>=0;--i)
    {
        int a = temp/pow(10,i );
        temp = temp- a*pow(10,i );
        he += a;
    }

    return he;
}
//找到二进制
int get2(int n)
{
    bitset<32> nb;//转换二进制
    nb = n;

    int count = 0;
    for(int i=0;i<32;++i)
    {
        if(nb[i]&1 == 1)
        {
            count++;
        }
    }
    return count;
}



int main()
{

    int n;
    while(cin>>n)
    {
        int count=0;
        for(int i = 1;i<=n ;++i )
        {
            int  b=get10(i);
            int a = get2(i);
            if(a==b)
            {
                count++;
            }
        }
        cout<<count;

    }



    return 0;

}