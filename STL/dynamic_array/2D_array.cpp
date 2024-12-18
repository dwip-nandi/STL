#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v{
        {1,2,3,4,4,233,5,5},{2,3,4,5,5,6,7},{12,2,34,34,45,546,6},{23,4,5,56,67,7,87}
    };
    //print the size of a vector
    for(int i=0;i<v.size();i++){
        cout<<v[i].size()<<endl;//count the per row number of elements
    }
    //palerint the value or traversing of a vector
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<' ';
        }cout<<endl;
    }
    //another procedure to traverce of a vector
    for(vector<int> row : v){
        for(auto colum : row){
            cout<<colum<<' ';
        }cout<<endl;
    }

}