// write your code here cpp
#include<iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin>>n>>m;
    int k1=n/2;
    int k2=m/2;
    long long a[k1+1];
    long long  b[k2+1];
    int i=1,j=1;
    	a[0]=n;
    	b[0]=m;
    while(a[i]!=1&&i<=k1)
    {
        a[i]=a[i-1]/2;
        i++;

    }
    while(b[j]!=1&&j<=k2)
    {
        b[j]=b[j-1]/2;
        j++;
    }

    for(int d=0;d<=k1;d++)
    {
     for(int q=0;q<=k2;q++)
         {
         if(a[d]==b[q])
             {
             cout<<a[d];
                 return 0;
         }
     }
    }


    return 0;
}