#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number:";
    cin>>n;
    if(n>2 && n%2==0){
        cout<<"not Prime\n";
    }
    else{
    for (int i = 3; i <= 9; i=i+2)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count>0) cout<<"not Prime\n";
    else cout<<"prime\n";
    }
    // else{
    // for (int i = 1; i <= n; i=i+2)
    // {
    //     if(n%i==0){
    //         count++;
    //     }
    // }
    // if(count>2) cout<<"not Prime\n";
    // else cout<<"prime\n";
    // }
}