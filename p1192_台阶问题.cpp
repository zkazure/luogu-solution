// ===== crazy solution =====
#include <bits/stdc++.h>
using namespace std;

int main() {
  const int mod = 100003;
  int dp[100005];
  int n, k;

  cin >> n >> k;

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=k; j++) {
      
    }
  }
}


// ===== my solution ======
#include <bits/stdc++.h>
using namespace std;

int steps(int n, int& k) {
  int amount = 0;

  if (!n)
    amount = 1;

  for (int i=1; i<=k && i<=n; i++)
    amount += steps(n-i, k);

  return amount;
}

int main() {
  int n, k;
  cin >> n >> k;

  int ans = steps(n, k);

  printf("%d", ans);

  return 0;
}
