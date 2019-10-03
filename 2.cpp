#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    int *g=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=0;
        g[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
            int s=a[i];
            while(a[i]>0)
            {

                int k=a[i]%10;
                if((k!=0) && (s%k==0))
                {
                    g[i]++;
                }
                a[i]=(a[i]-k)/10;
            }
    }
    for(int i=0;i<n;i++)
    {

        cout<<g[i]<<endl;
    }

return 0;
}
