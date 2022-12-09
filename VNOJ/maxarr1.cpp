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

const int _ = 100005; 

int num[_], mx[_], T, N; 

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 

    num[0] = 0, num[1] = 1, mx[0] = 0; 
    for (int i = 2; i < _; i++) num[i] = (i % 2) ? (num[i / 2] + num[i / 2 + 1]) : num[i / 2]; 
    for (int i = 1; i < _; i++) mx[i] = max(mx[i - 1], num[i]); 

    scanf("%d", &T); 
    for (int i = 0; i < T; i++) {
        scanf("%d", &N); 
        printf("%d\n", mx[N]); 
    }

    return 0;
}
