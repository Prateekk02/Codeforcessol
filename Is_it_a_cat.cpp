#include<bits/stdc++.h>
using namespace std;

bool sol(const string &str, int n)
{
    if(str.size()<=3)   // base case
        return false;

    string temp = "";
    temp+=str[0];
    for(int i=0;i<n-1;i++)
    {
        
        if(str[i]!=str[i+1])
            temp+=str[i+1];
    
    }
    
    return(temp == "meow");
}
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
        cin.ignore();
        string str;
        getline(cin,str);
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        
        (sol(str,n))? cout<<"Yes\n": cout<<"No\n";
    }
    return 0;
}