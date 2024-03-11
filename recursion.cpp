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

int main() {
    prints();
    return 0;
}
