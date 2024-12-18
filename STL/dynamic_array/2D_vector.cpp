#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,colum;
    cin>>row>>colum;
    vector<vector<int>>v(row,vector<int>(colum));
    vector<vector<int>>v2(row,vector<int>(colum));
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cin>>v[i][j];
        }
    }
    for(vector<int> row : v){
        for(int colum : row){
            cout<<colum<<' ';
        }cout<<endl;
    }
}