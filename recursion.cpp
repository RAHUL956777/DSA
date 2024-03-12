// recursion :- when a function calls itself until a specific condition is met
//recursion tree :- a tree that represents the function calls 
#include <bits/stdc++.h>

using namespace std;

int globalCount = 0;  

void prints() {
    if (globalCount == 5) {
        return;
    }
    cout << "count is: " << globalCount << endl;
    globalCount++;
    prints();
}

//print name n times using recursion
void printName(int i, int n){
    if(i>n) return;
    cout<<"Rahul"<<endl;
    printName(i+1,n);
}

//print linearly from 1 to n using recursion
void pLinearNumber(int i,int n){       //1 5
    if(i>n || n==0)return;             //false false false false false true
    cout<<i<<endl;                     //1 2 3 4 5 return
    pLinearNumber(i+1,n);              //2 3 4 5 6
}

//print number in terms of N -> 1 using recursion
void PBackNumber(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    PBackNumber(i-1,n);
}

//print linearly from 1 to n but by backtrack
void pLinearNumberBacktracking(int i, int n){ // 3,3
    if(i<1) return; //false
    pLinearNumberBacktracking(i-1,n); // (2,3)
    cout<<i<<endl;
}

//print from n to 1 (by backtracking) dont use f(i-1,n)
//3 2 1
void pBackNumberBacktracking(int i, int n){  //(1,3 ), (2,3), (1,3)
    if(i>n) return;                          //false   false   false
    pBackNumberBacktracking(i+1,n);          //(2,3),  (1,3),  (0)
    cout<<i<<endl;
}

int main() {
    int num; 
    cout<<"Enter how many times you want to see: ";
        cin>>num;
        pBackNumberBacktracking(1,num);
    return 0;
}
