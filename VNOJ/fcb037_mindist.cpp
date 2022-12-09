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
    int Nu[N]; 
    for (int i = 0; i < N; i++) scanf("%d", &Nu[i]); 

    int ans = 9999; 
    for (int i = 0; i < N - 1; i++) 
        for (int j = i + 1; j < N; j++) 
            if (Nu[i] == Nu[j]) ans = std::min(ans, j - i); 

    ans = (ans == 9999) ? -1 : ans; 
    printf("%d\n", ans);  

    return 0;
}
