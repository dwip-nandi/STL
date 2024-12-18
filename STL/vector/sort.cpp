#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,421324,45,323,43,-2,34};
    sort(v.begin(),v.begin()+4);// pointer use for partial sort
    for(auto u:v)cout<<u<<' ';
}