#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    pair<char,int>p;
    cin>>p.first>>p.second;
    cout<<p.first<<p.second;
    pair<int,char[10]>student;
    for (int i = 1; i < 5; i++)
    {
        cout<<"Enter the roll number:";
        cin>>student.first;
        cout<<"Enter the student name: ";
        scanf("%S",student.second);
    }
    for (int i = 1; i < 5; i++)
    {
        cout<<student.first<<"\n";
        cout<<student.second;
    }
    //vector with pair
    vector<pair<char,int>>v;
    v.push_back({'A',1});
    v.push_back({'B',2});
    v.push_back({'C',3});
    v.push_back({'D',4});
    v.push_back({'A',1});
    v.push_back({'A',1});
    v.push_back({'A',1});
    v.push_back({'A',1});
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
    
    
}