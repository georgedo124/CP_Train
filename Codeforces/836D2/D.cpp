// https://codeforces.com/blog/entry/109438?#comment-975817
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
    int N; scanf("%d", &N);     

    printf("%d %d ", 3 * N, 5 * N); 
    if (N & 1) printf("%d ", 4 * N); 
    for (int i = 1; i <= (N / 2 - 1); i++) 
        printf("%d %d%c", N * 4 - i, N * 4 + i, " \n"[i == (N / 2 - 1)]); 
}

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); 
    
    int T;
    for (scanf("%d", &T); T; T--) {
        solve(); 
    }

    return 0;
}
