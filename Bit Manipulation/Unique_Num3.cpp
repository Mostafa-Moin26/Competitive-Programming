
// Problem Name: Unique Number - III
// Problem Difficulty: None
// Problem Constraints: N < 10^5
// Problem Description:
// We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

// Input Format: First line contains the number n. Second line contains n space separated number.
// Sample Input: 7
// 1 1 1 2 2 2 3
// Output Format: Output a single line containing the unique number
// Sample Output: 3

#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    int n; cin >> n;

    int sum[64] = {0};
    int num;

    for (int i = 0; i < n; ++i) {

        cin >> num;
        int idx = 0;

        while (num > 0) {

            sum[idx] += (num & 1);
            idx++;
            num = num >> 1;
        }
    }

    int ans = 0;
    int p = 0;

    for (int i = 0; i < 64; ++i) {

        if ((sum[i] % 3) > 0) {
            ans += (1 << p);
        }

        p++;
    }

    cout << ans << endl;
    return 0;
}