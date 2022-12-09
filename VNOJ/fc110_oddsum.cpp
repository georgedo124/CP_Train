#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
 
#include <algorithm>
#include <stack>
#include <bitset>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <chrono>
#include <string>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

typedef long long ll; 
typedef unsigned long long ull; 

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 

    int N; scanf("%d", &N); 
    ll ans = 0, Nu[N];  

    for (int i = 0; i < N; i++) {
        scanf("%lld", &Nu[i]); 
        if (i & 1) ans += Nu[i]; 
    }

    printf("%lld\n", ans);
    
    return 0;
}
