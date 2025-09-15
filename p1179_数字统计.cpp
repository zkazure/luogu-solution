#include <bits/stdc++.h>
using namespace std;

int cnt_2(int n) {
    int cnt = 0;
    while (n!=0) {
        if (n%10 == 2)
            cnt ++;
        n/=10;
    }
    return cnt;
}

int main() {
    int l, r;
    int cnt = 0;
    cin >> l >> r;
    for (int i=l; i<=r; i++) {
        cnt += cnt_2(i);
    }

    cout << cnt;
    return 0;
}
