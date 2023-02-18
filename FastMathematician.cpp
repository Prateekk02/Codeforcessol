#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
     string s1,s2,s;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.size();i++)
    {
        int temp;
        temp = int(s1[i])^int(s2[i]);
        s.append(to_string(temp));
    }
    cout<<s<<"\n"; 
    return 0;
}