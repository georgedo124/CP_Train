#include <bits/stdc++.h>

const int MAXN = 1005; 

int N, ans = 0, a[MAXN], dp[MAXN]; 

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); 
    
    scanf("%d", &N); 
    for (int i = 1; i <= N; i++) scanf("%d", &a[i]); 
    
    a[0] = 0, dp[0] = 0; 
    for (int i = 1; i <= N; i++) {
        dp[i] = 1; 
        for (int j = 0; j < i; j++) 
            if (a[i] > a[j]) {
                dp[i] = std::max(dp[j] + 1, dp[i]);  
                ans = std::max(ans, dp[i]);
            }
    }

    printf("%d", ans);

    return 0; 
}
