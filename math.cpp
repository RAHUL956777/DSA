#include<bits/stdc++.h>

using namespace std;

int getnum(int num){
    int count = 0;
    while(num>0){
        int lastdigit = num % 10;
        count = count + 1;
        num = num/10;
    }
    cout<<count;
    return count;
}

int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    getnum(num);

    return 0;
}