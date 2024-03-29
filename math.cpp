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
void printdivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
}

//another way to find factors
void printdivisorsanother(int n){
    vector<int> ls;

    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it:ls) cout<<it<< " ";
}

void findprime(int n){
    int count = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            count++;
            if((n/i) !=i){
                count++;
            }
        }
    }
    if(count == 2) {
        cout<<n<<" "<<"Is a prime number";
    }else{
        cout<<n<<" "<<"Is not a prime number";
    }
}

 int printgcd(int a, int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b = b%a;
    }
    if(a==0) {
        cout<<"Greatest Common divisor is: "<<b;
        return b;
    }
    else{
        cout<<"Greatest Common divisor is: "<<a;
        return a;
    
    }
}

int main(){
    int n1,n2;
    cout<<"enter numbers : ";
    cin>>n1>>n2;
    printgcd(n1,n2);

    return 0;
}