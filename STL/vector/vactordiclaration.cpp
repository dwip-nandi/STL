#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector<int>vec(6);
    //vector<float>vec (10,23.34);
    //vector<long>vec = {1,2,3,4,4,5,6,7,77};
    vector<int> cdf(5);
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&cdf[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("value:%d   ",cdf[i]);
        printf("address:%d \n",&cdf[i]);
        
    }

    
}