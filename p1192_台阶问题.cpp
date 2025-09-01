// ===== my solution2  =====
// it is too easy to TLE
#include <bits/stdc++.h>
using namespace std;

int cnt_ways(int n, int k) {
    if (n==0)
        return 1;
    if (n<0)
        return 0;
    if (k<=0)
        return 0;

    int ways = 0;
    for (int i=1; i<=k; ++i) {
        ways += cnt_ways(n-i, k);
    }
    return ways;
}

int main() {
    int n, k;
    cin >> n >> k;
    int ways = cnt_ways(n, k);

    cout << ways;
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
