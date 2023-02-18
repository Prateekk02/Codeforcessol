#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int Sol(int arr[] ,int n)
    {
        int count = 0;
        sort(arr, arr+n);
        if(arr[n] == arr[n-1])
            {
                count += arr[n];
            }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==0)
                continue;
            else if(arr[i] == 1 && arr[i+1] == 1)
            {
                count++;
                i++;
                arr[i] = 0;
                arr[i+1] = 0;
            }
            else
                count++;
        }
        return count;
    }

};
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(auto x : arr)
            cin>>x;
        Solution obj;
        cout<<obj.Sol(arr,n)<<"\n";

    }
    return 0;
}