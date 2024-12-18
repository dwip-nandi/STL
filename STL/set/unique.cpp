#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    vector<int>v={1,2,2,1,34,43,44, 34,44,45,77,8986,66,7777,66};
    sort(v.begin(),v.end());
    int sz= unique(v.begin(),v.end()) - v.begin();
    cout<<sz<<endl;
    for(int i=0;i<sz;i++)cout<<v[i]<<' ';

}