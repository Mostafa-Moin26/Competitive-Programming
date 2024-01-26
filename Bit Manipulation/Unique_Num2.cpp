
// Problem Name: Unique Numbers - II
// Problem Difficulty: None
// Problem Constraints: n < 10^5
// Problem Description:
// We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

// Input Format: First line contains the number n. Second line contains n space separated number.
// Sample Input: 4
// 3 1 2 1
// Output Format: Output a single line containing the unique numbers separated by space
// Sample Output: 2 3

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

    int num[100005];
    int res = 0;

    for (int i = 0; i < n; ++i) {
        cin >> num[i];
        res ^= num[i];
    }

    // find the first bit of res
    int pos = zrobits(res);

    int X, Y; X = Y = 0;

    for (int i = 0; i < n; ++i) {

        if (((1 << pos) & num[i]) > 0) {
            X ^= num[i];
        }
    }

    Y = res ^ X;

    cout << min(X, Y) << " " << max(X, Y) << endl;
    return 0;
}