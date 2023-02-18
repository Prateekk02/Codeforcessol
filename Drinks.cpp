#include<bits/stdc++.h>
using namespace std;
double sol(double p[], int n)
{
    double sum = 0;
    for(int i=0;i<n;i++)
    {
        p[i] = double(p[i]/100);
        sum+=p[i];
    } 
    return(double(sum/n) * 100);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    double p[n];
    for(int i=0;i<n;i++)
        cin>>p[i];

    cout<<sol(p,n)<<"\n";
    return 0;
}