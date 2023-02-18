// 1 2 3 4 5 6 7 8  9 10 11,12
// f f f f f f f f f  f  f  f



#include<bits/stdc++.h>
using namespace std;
int sol(int k, int l, int m, int n, int d)
{
    if(k==1)           // efficiency wise 
        return d;
    bool arr[d+1] = {false};
    for(int i=1;i<=d;i++)
    {
        if(i*k<=d)
            arr[i*k] = true;
        if(i*l<=d)
            arr[l*i] = true;
        if(i*m<=d)
            arr[m*i] = true;
        if(i*n<=d)
            arr[n*i] = true;
    }
    int count = 0;
    for(int i=1;i<d+1;i++)
    {
        if(arr[i] == false)
            count++;
    }
    return (d - count);
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    while(t--)
    {
        int k,l,m,n,d;
        cin>>k>>l>>m>>n>>d;
        cout<<sol(k,l,m,n,d);
    }
    return 0;
}