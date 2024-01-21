// Problem Name: Playing With Bits
// Problem Difficulty: 1
// Problem Constraints: Q,a,b are integers.
// Problem Description:
// Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya.
// You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query
// containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)

// Input Format: Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.
// Sample Input: 2
// 1 1
// 10 15
// Output Format: Q lines, each containing an output for your query.
// Sample Output: 1
// 17

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

int count_setBits(int num) {

    int cnt = 0;

    while (num) {
        cnt += (num & 1);
        num = num >> 1;
    }

    // we can use builtin function
    // return __builtin_popcount(num);

    return cnt;
}
int main() {

    Mostafa

    w(x) {
        int a, b; cin >> a >> b;

        int total = 0;
        for (int i = a; i <= b; ++i) {

            total += count_setBits(i);
        }

        cout << total << endl;
    }

    return 0;
}