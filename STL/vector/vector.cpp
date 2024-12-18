#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a[100];
    // vector<int>v;
    // v.push_back(2);
    // v.push_back(24);
    // v.push_back(2);
    // v.push_back(2);
    // v[2]=3;
    // v.push_back(5);
    // cout<<v[4]<<endl;
    // cout<<v[0]<<v[2]<<endl;
    // cout<<v.size();
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    int n;
    vector<int> v;
    cin>>n;
    for (int i = 0; i <n ; i++)
    {   int a;
        cin >> a;
        v.push_back(a);
    }
    cout<<v.size();
    for (int i = 0; i <n; i++)
    {
        cout<<v[i]<<endl;
    }
    
    
}