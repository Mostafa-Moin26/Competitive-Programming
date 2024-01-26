#include<bits/stdc++.h>

using namespace std;


// this function will work only for small number
int decimalToBinary(int n) {

    int ans = 0;
    int p = 1;

    while (n > 0) {

        int lastBit = n & 1;

        ans += p * lastBit;

        n = n >> 1;
        p = p * 10;
    }

    return ans;
}

// this will work for big integer
vector<int> decToBinary(int n) {

    vector<int> ans;

    while (n > 0) {
        (n & 1) ? ans.push_back(1) : ans.push_back(0);

        n = n >> 1;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {

    int n; cin >> n;


    // cout << decimalToBinary(n) << endl;

    vector<int> res = decToBinary(n);

    for (auto i : res) cout << i;

    cout << endl;

    return 0;
}