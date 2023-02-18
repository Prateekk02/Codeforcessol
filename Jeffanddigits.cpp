#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
   bool flag = true;
    int n;
    cin>>n;
    int arr[n];
    int p=0,q=0;
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==5)
            p++;
            else 
            q++;
        }
    if(q==0)
        cout<<-1<<"\n";
    else if(p<9)
        cout<<0<<"\n";
    else
    {
        string res;
        for(int i=1; i<=9*(floor(p/9)) ;i++)
        {
            res = res + '5';
        }
        while(q--)
            res = res + '0';
        
        cout<<res<<"\n";
    }
    return 0;
}