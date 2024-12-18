#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(16363);
    vec.push_back(6656);
    vec.push_back(-645);
    vec.push_back(10);
    vec.push_back(-565);
    vec.push_back(15);
    //vec.pop_back();
    int n= vec.size();
    for (int i = 0; i < n; i++)
    {
        printf("The value is  : %d\n",vec[i]);
    }
    //at first element of a vector
    printf("The first element : %d\n",vec.front());
    //at last element of a vector
    printf("The last element : %d\n",vec.back());
     
     vector<int> vec2(20,100);
     vec2.assign(4,0);//value assign
    
    for (int i = 0; i < 20; i++)
    {
        printf("value:%d   ",vec2[i]);
        printf("address:%d \n",&vec2[i]);
        
    }

    vec2.clear();//
}