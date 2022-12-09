#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005; 

int L, R, N[MAXN];

int calc(int x) {
    int s = 0; 
    for (int i = 1; i * i <= x; i++) { 
        if (!(x % i)) 
            s += (i + x / i); 
        if (i * i == x) 
            s -= i; 
    }
    s -= x; 
    
    return (s > x) ? 1 : 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); 
    int ans = 0;

    cin >> L >> R; 

    for (int i = L; i <= R; i++) 
        if (calc(i)) ans++; 

    cout << ans << "\n";

    return 0; 
}
