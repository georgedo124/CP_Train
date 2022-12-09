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

    int x, y, z; scanf("%d%d%d", &x, &y, &z); 
    pritnf("%.3f\n", (x + y + z) / 3.0); 

    return 0;
}
