#include<bits/stdc++.h>
using namespace std;

//pairs
void explainPair(){
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    //nested pairs
    pair<int,pair<int,int>>p={1,{3,4}}
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second

    //pair array
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    // {{0},{1},{2} this should be index of pair array
}

//vectors

/*
vector is a dynamic array we can always change the size of vector container
when you dont know the size of a particular data structure then you can use vector
*/
void explainVector(){
        vector<int>varibalename;//it creates an empty container {}
        verialbeName.push_back(1);//{1}
        varibalename.emplace_back(2);//{1,2}  // it is similar to the push_back but emplace_back is faster than push_back 
}

int main(){



    return 0;
}