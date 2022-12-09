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

    if (N % 2) for (int i = 1; i <= N; i++) printf("1%c", " \n"[i == N]); 
    else {
        printf("1 3 "); 
        for (int i = 3; i <= N; i++) printf("2%c", " \n"[i == N]); 
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
