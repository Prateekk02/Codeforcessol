#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
        bool sol(string str)
        {
            int count = 0;
            sort(str.begin(), str.end());
            for(int i=0;i<(str.size()-1);i++)
            {
                if(str[i] == str[i+1])
                {
                    continue;
                }
                count++;
            }
               
            if((count+1)&1)
                return false;
            else 
                return true;
        }
};
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL), cout.tie(NULL);
    solution obj;
    string str;
    getline(cin,str);
    (obj.sol(str))? cout<<"CHAT WITH HER!\n": cout<<"IGNORE HIM!\n";

    return 0;
}