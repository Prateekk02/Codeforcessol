#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
    int n;
    cin>>n;
    //bool flag = false;
    int t1=0,t2=1;
    int nextTerm = t1+t2;
    if(n>1)
    {
        while(1)
        {
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;

            if(nextTerm==n)
                break;
        }
    }
    if(n>1)
    cout<<(2*t1-t2)<<" "<<(t2-t1)<<" "<<t2<<"\n";
    else if(n==0)
    cout<<0<<" "<<0<<" "<<0<<"\n";
    else if(n==1)
    cout<<1<<" "<<0<<" "<<0<<"\n";
    else 
    cout<<"I'm too stupid to solve this problem\n";

    return 0;
}