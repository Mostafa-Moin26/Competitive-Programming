#include<bits/stdc++.h>

using namespace std;

#define ll long long


ll power_optimised(ll a, ll n) {

    ll ans = 1;

    while (n > 0) {

        int lastBit = n & 1;

        if (lastBit) {
            ans = ans * a;
        }

        a = a * a;
        n = n >> 1;
    }

    return ans;
}

int main() {

    cout << power_optimised(2, 4) << endl;

    return 0;
}