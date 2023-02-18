// Little Elephant and Rozdil Problem of Codechef
#include<bits/stdc++.h>
using namespace std;
int sol(int arr[], int n)
{
    int pos,count=0;
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
        mn = min(mn,arr[i]);
    
    for(int i=0;i<n;i++)
    {
        if(mn == arr[i])
        {
            if(count<1)
            {
                pos = i+1;
            }
            count++;
        }
    }
    if(count>=2)
        return -1;
    else
        return pos;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int res = sol(arr,n);
    if( res == -1)
        cout<<"Still Rozdil\n";
    else
        cout<<res<<"\n";

    return 0;
}