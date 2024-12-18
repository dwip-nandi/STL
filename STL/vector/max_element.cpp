#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    vector<int>v={1,2,2,23444,1,34,43,44, 34,44,45,77,8986,66,7777,66};
    //sort(v.begin(),v.end());
    vector<int>::iterator max_value;
     max_value = max_element(v.begin(),v.end());
     cout<< *max_value<<endl;

     int n= max_element(v.begin(), v.end())-v.begin();
     cout<<n<<endl;
 

}