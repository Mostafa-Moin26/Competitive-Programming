// Problem Name: Unique Number - I
// Problem Difficulty: None
// Problem Constraints: n < 10^5
// Problem Description:
// We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time. ( Hint - Use Bitwise )

// Input Format: First line contains the number n. Second line contains n space separated number.
// Sample Input: 7
// 1 1 2 2 3 3 4
// Output Format: Output a single line containing the unique number
// Sample Output: 4

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

    int ans = 0;

    while (n--) {
        int num; cin >> num;

        ans ^= num;
    }

    cout << ans << endl;

    return 0;
}