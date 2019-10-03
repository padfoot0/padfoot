#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

   for(int i=0;i<n;i++)
    {
    int f=0;
        int n1,n2;
        cin>>n1>>n2;
        int n3=n1;
        int x=n2-n1;
        int n4=x+1;
        int *a=new int[n4];
        for(int i=0;i<n4;i++)
        {
            a[i]=n1++;
        }

        int c=pow(n3,0.5);
        int d=pow(n2,0.5);


        for(int i=c;i<=d;i++)
        {
            for(int j=0;j<n4;j++)
            {
             if(i*i==a[j])
            {
               f++;
            }

        }
           }
cout<<f;
  }

    return 0;
}
