#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector<vector<int>>v(a,vector<int>(b));
    srand(time(0));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           v[i][j]=rand()%100;//random inputs taking
        }
    }
    for(vector<int> a:v){
        for(int b:a) cout<<b<<' ';
        cout<<endl;
    }

}