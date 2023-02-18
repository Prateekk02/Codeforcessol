#include<bits/stdc++.h>
using namespace std;
int check(string &s1, string &s2)
{
    if(s1 == s2)
        return 0;
    for(int i=0;i<s1.size(); i++)
    {
        if(s1[i] < s2[i])
            return -1;
        if(s1[i]>s2[i])
            return 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout<<check(s1,s2)<<"\n";
    return 0;
}