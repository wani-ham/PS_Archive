#include <iostream>
#include <vector>
#define MAX 100000

using namespace std;

long long dp[MAX + 1][4];
int p = 1000000009;

void init() {
  dp[1][1] = dp[2][2] = dp[3][3] = dp[3][1] = dp[3][2] = 1;
  for(int i = 4; i <= MAX+1; i++) {
    dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % p;
    dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % p;
    dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % p;
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  int t, n;
  cin >> t;

  init();
  for(int i = 0; i < t; i++) {
    cin >> n;
    cout << (dp[n][1] + dp[n][2] + dp[n][3]) % p << '\n';
  }
  return 0;
}
