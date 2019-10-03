#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=b-a;
    int *a1=new int[d];
    for(int i=0;i<(d+1);i++)
    {
        a1[i]=a++;
    }
    int *n1=new int[d];
    for(int i=0;i<d+1;i++)
    {n1[i]=0;}
    for(int i=0;i<d+1;i++)
    {
        int s=a1[i];
        while(s!=0)
        {
            int s1=s%10;
            n1[i]=n1[i]*10+s1;
            s=(s-s1)/10;
        }
    }
    int l=0;
for(int i=0;i<d+1;i++)
{
int k=a1[i]-n1[i];
if(k%c==0)
l++;

}
cout<<l;

}
