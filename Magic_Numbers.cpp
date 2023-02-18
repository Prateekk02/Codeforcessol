#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int x;
    bool sol()
    {
        string str = to_string(x);
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!='1' || str[i]!='4')
                return false;
            
        }
    }
};
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
    solution obj;
    cin>>obj.x;
    (obj.sol())?cout<<"YES\n" : cout<<"NO\n";
    return 0
}