#include <iostream>
#include<string.h>
#include <math.h>
#include <bitset>
#include <sstream>
#include <vector>
using namespace std;
//把number转换成 nunit进制的数
int getNUnit(int nunit,int number)
{
    	vector<int> nunitNumber;
    	//find highest
    	int high=0;
        while(pow(nunit,high) < number)
        {
            high++;
        }
    	int temp = number;
    	int he=0;
    	for(int i = high-1;i>=0;--i)
        {
            int a = temp/pow(nunit,i);
            temp -= a*pow(nunit,i);
            nunitNumber.push_back(a);//把高位先放进数组
            he += a;
        }
    return he;


}
//获取最大公约数
int getMaxFactor(int a,int b)
{
    int max = a<b?a:b;
    int maxFactor = max;
    for(int i=1;i<=max;++i)
    {
        if(a%i==0&&b%i==0)
        {
            maxFactor = i;
        }
    }

    return maxFactor;

}



int main()
{


    int n;
    while (cin>>n)
    {
        int get[n];
        get[n]={0};
        int sum=0;
        for(int i=2;i<n;++i)
        {
            get[i] = getNUnit(i,n);
            sum +=  get[i];
        }
        int maxFactor=getMaxFactor(sum,n-2);
        cout<<sum/maxFactor<<"/"<<(n-2)/maxFactor;
    }

    return 0;
}