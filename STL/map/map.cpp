#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int>m;
    vector<int>v{1,2,2,3,4,5,6,64,4,6,54,3,44,5,5,645,34,3,3,4,4,4,4,4,4,4,4,};
    for (int i = 0; i < v.size(); i++)
    {
        m[ v[i] ]++;
    }
    for (auto ti: m)
    {
        cout<<ti.first<<"  "<<ti.second<<"\n";
    }
    
    
}