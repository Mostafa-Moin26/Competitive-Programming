#include<bits/stdc++.h>

using namespace std;

int countSetBits(int n) {

    int ans = 0;

    while (n > 0) {

        ans += n & 1;

        n = n >> 1;
    }

    return ans;
}

int countSetBitsFast(int n) {

    int ans = 0;

    while (n > 0) {

        n = n & (n - 1);
        ans++;
    }

    return ans;
}
int main() {

    int n; cin >> n;

    // 1st way
    cout << countSetBits(n) << endl;

    // 2nd way
    cout << countSetBitsFast(n) << endl;

    // 3rd way
    cout << __builtin_popcount(n) << endl;

    return 0;
}