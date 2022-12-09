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

const int MAXN = 20, MAXW = 5100; 

int MW, N, W[MAXN], dp[MAXN][MAXW]; 

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 

    cin >> MW >> N; 
    for (int i = 1; i <= N; i++) cin >> W[i]; 

    for (int i = 0; i <= N; i++) 
        for (int j = 0; j <= MW; j++) 
            if (i == 0 || j == 0)   
                dp[i][j] = 0; 

    for (int i = 1; i <= N; i++) 
        for (int j = 1; j <= MW; j++) {
            dp[i][j] = dp[i - 1][j]; 
            if (W[i] <= j) 
                dp[i][j] = max(dp[i][j], dp[i - 1][j - W[i]] + W[i]); 
        }

    cout << dp[N][MW] << "\n"; 

    return 0;
}
