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

void reversnum(int num){
    int duplicatenum = num;
    int reverse = 0;
    while(num>0){
        int lastdigit = num % 10;
        reverse = reverse*10 + lastdigit;
        num = num/10;
    }
    if(reverse == duplicatenum){
        cout<<"number is palindrome"<<" "<<duplicatenum;
    }
    else{
            cout<<"number is not palindrome";
    }


}



int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    reversnum(num);

    return 0;
}