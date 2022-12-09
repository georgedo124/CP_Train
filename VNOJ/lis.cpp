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
    vector<int> nu(N); 
    multiset<int> s; 

    for (int i = 0; i < N; i++) scanf("%d", &nu[i]); 
    for (int value : nu) { 
        auto it = s.lower_bound(value); 

        if (it != s.end()) s.erase(it); 
        s.insert(value); 
    }

    printf("%lu\n", s.size());  
    
    return 0;
}
