//  https://codeforces.com/problemset/problem/144/A

// INCOMPLETE SOLUTION.

include<bits/stdc++.h>
using namespace std;

int sol(int arr[], int n)
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    int posM,posm;
    for(int i=0;i<n;i++)    // finding mx and mn height.
    {
        mx = max(mx, arr[i]);
        mn = min(mn,arr[i]);
    }
    for(int i=0;i<n;i++) // finding first occ of mx ht.
    {
        if(arr[i]==mx)
           {
                posM = i;
                break;
           }
    }
    for(int i=n-1;i>0;i--) // finding last occ of mn ht.
    {
        if(arr[i] == mn)
        {
            posm = i;
            break;
        }
    }
    int res = n - posm - 1 + posM;
    if(posM<posm || (posm==0 && posM == n-1) && n !=2 )
        return res;
    else
        return res-1;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
   }
   cout<<sol(arr,n);
   return 0;
}
