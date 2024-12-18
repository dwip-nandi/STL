#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    vector<int> v;
    //while (cin >> c)
    while(1)//another procedure
    {
        cin>>c;
        if (c == 0)
        {   
            break;
           
        } v.push_back(c);
    }
    for(auto u:v)cout<<u<<endl;
}