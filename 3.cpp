#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e=100;
    int i=k;
  while(i%n!=0)
    {
        if((a[i%n]==0))
        e=e-1;
        else
        {e=e-2-1;}
        i=i+k;
}

    if(a[0]==0)

    cout<<e-1;
    else
    cout<<e-3;

    return 0;
}
