#include<bits/stdc++.h>
using namespace std;
bool check(int x)
{
    return x<=1;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        
        int n, m;
        string s1,s2;  // Two count no. of occurances of two pair
        cin>>n>>m;
        cin>>s1;
        cin>>s2;

        reverse(s2.begin(),s2.end());
        string s = s1+s2; // concatinating the two string
        
        int x = 0 ;
        for(int i=0; i<(s.size()-1); i++)
        {
            if(s[i] == s[i+1])
                x++;
        }
        cout<<(check(x)? "Yes":"No")<<"\n"; 
        
    }   
    return 0; 
}