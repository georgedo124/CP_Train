#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <ctime>

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <chrono>
#include <random>
#include <iomanip>

using namespace std;

using ll = long long; 
using ull = unsigned long long; 

void solve() {
    int N, X; 
    scanf("%d%d", &N, &X); 

    int P[N + 1]; 
    std::iota(P + 1, P + N + 1, 1); 
    P[1] = X, P[N] = 1; 

    // You must find a longest sub sequence, such that: 
    // X | x_1 | x_2 | ... | N 
    // https://codeforces.com/contest/1758/submission/182493612
   
    if (N % X) puts("-1"); 
    else {
        for (int i = 2 * X; i <= N; i += X) 
            if (N % i == 0) {
                P[X] = i; 
                X = i; 
            }

        for (int i = 1; i <= N; i++) 
            printf("%d%c", P[i], " \n"[i == N]); 
    }
}

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); 
    
    int T;
    for (scanf("%d", &T); T; T--) {
        solve(); 
    }

    return 0;
}
