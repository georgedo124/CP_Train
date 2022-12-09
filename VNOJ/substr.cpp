#include <bits/stdc++.h>
using namespace std;

// You can using BASE = 1e9 + 7 
const int MAXN = 1000005, BASE = 31; 
const long long MOD = 1e9 + 7; 

string P, T; 
long long M, N, hashT = 0, hashPow[MAXN], hashP[MAXN]; 

int getHash(int i, int j) {
    return (hashP[j] - hashPow[j - i + 1] * hashP[i - 1] + MOD * MOD) % MOD; 
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); 

    cin >> P >> T; M = P.size(), N = T.size(); 
    P = ' ' + P, T = ' ' + T; 

    hashT = 0; 
    for (int i = 1; i <= N; i++) 
        hashT = (hashT * BASE + T[i] - 'a' + 1) % MOD; 

    hashPow[0] = 1; 
    for (int i = 1; i <= M; i++) 
        hashPow[i] = (hashPow[i - 1] * BASE) % MOD; 

    hashP[0] = 0; 
    for (int i = 1; i <= M; i++) 
        hashP[i] = (hashP[i - 1] * BASE + P[i] - 'a' + 1) % MOD; 
    
    for (int i = 1; i <= (M - N + 1); i++) 
        if (hashT == getHash(i, (N + i - 1)))
            cout << i << " \n"[i == (M - N + 1)];  

    return 0; 
}
