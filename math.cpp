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

//palindrome number
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

//armstrong number
void armstrong(int n){
    int dpn =  n;
    int sum = 0;
    while(n>0){
        int lastdigit = n % 10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n/10;
    }
    if(sum == dpn){
        cout<<"number is armstrong"<<" "<<dpn;
    }
    else{
        cout<<"number is not armstrong";
    }
}


//find all divisors
void divisors(int num){
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            cout<<i<<" ";
        }
    }
}


int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    divisors(num);

    return 0;
}