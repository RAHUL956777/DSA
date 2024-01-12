#include<bits/stdc++.h>

using namespace std;

void print1(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n2){
    for(int i=0;i<n2;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(int n3){
    for(int i=1;i<=n3;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n4){
    for(int i=1;i<=n4;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for (int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<n;i++){
        //space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
        // star
            for(int j=0; j < 2*i+1; j++){
                cout<<"*";
            }
        // space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // star
            for(int j=0;j<2*n-(2*i+1);j++){
                cout<<"*";
            }
          // space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

// void pattern8(int n){
//     for(int i=n;i>0;i--){
// //space
// for(int j=0;j<n*1-i;j++){
//     cout<<" ";
// }
// //star
// for(int j=0;j<2*i-1;j++){
//     cout<<"*";
// }
// //space
// for(int j=0;j<n*1-i;j++){
//     cout<<" ";
// }
// cout<<"\n";
//     }

// }


int main(){
        int n;
        cin>>n;
        // print1(n);
        print2(n);
        print5(n);
    return 0;
}