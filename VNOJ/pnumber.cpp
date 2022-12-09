#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005; 

int A, B, P[MAXN]; 

int main() {
    cin >> A >> B; 
    for (int i = 1; i <= B; i++) P[i] = 1; 
    P[1] = 0; 

    for (int i = 2; i * i <= B; i++) {
        if (!P[i]) continue; 
        for (int j = i * i; j <= B; j += i) 
            P[j] = 0; 
    }

    for (int i = A; i <= B; i++) 
        if(P[i]) cout << i << "\n"; 

    return 0;
}
