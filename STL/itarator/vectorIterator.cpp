#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int> vec ={1,2,3,4,5,6,7,8};

    vector<int> :: iterator it;//value assign in a iterator
    //outside of iterator
    int first_element = *vec.begin();
    int last_element = *(vec.end()-1);
    printf("The first element is = %d\n",first_element);
    printf("The last element is = %d\n",last_element);

    //inside of iterator
    it = vec.begin();
    printf("The first element is = %d\n",*it);
    it = vec.end()-1;
    printf("The last element is = %d\n",*it);

    //iterator value with loop
    for ( it = vec.begin(); it!= vec.end(); it++)
    {
        printf("The value of iterator is = %d\n",*it);
    }

    //erase value with iterator
    for ( it = vec.begin(); it!= vec.end(); it++)
    {   if(*it==4)
           vec.erase(it);
    }
    for ( it = vec.begin(); it!= vec.end(); it++)
    {
        printf("The value of iterator is = %d\n",*it);
    }
    
  return 0;
}