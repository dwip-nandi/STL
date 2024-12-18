#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    set<int>::iterator it;
    s.insert(34);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(-654);
    s.insert(476);
    s.insert(24);
    for(it=s.begin();it!=s.end();it++){
        printf("%d ",*it);
    }
    for ( it = s.begin(); it != s.end() ; it++)
    {
        if(*it==476) printf("%d ",*it);
    }
    
    set<int,greater<int>>sr;
    set<int>::iterator itr;
    sr.insert(34);
    sr.insert(3);
    sr.insert(4);
    sr.insert(4);
    sr.insert(-654);
    sr.insert(476);
    sr.insert(24);
    for(it=sr.begin();it!=sr.end();it++){
        printf("%d ",*it);
    }

}