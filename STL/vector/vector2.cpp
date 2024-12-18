#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    vector<int> v;
    v.push_back(2);
    v.push_back(10);
    v.push_back(-12);
    v.push_back(-13);
    cout<<v[3]<<endl;
    v[2]=45;
    cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    //for user inputs
    int f;
    cin>> f;
    vector<float> v2;
    for(int j=0;j<f;j++){
        float b;
        cin>>b;
        v2.push_back(b);
    } 
    cout<<"dynamic input and outputs";
    for(int t=0;t<f;t++){
        cout<<v2[t]<<endl;
    }


} 