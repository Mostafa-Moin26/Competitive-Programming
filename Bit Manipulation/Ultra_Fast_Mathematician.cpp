// Problem Name: Ultra Fast Mathematicians
// Problem Difficulty: 1
// Problem Constraints: The length of each number doesn't exceed 100.
// Problem Description:
// Prateek is an extremely gifted student. He is great at everything including Combinatorics, Algebra, Number Theory, Geometry, Calculus, etc. He is not only smart but extraordinarily fast!.

// One day Prateek was trying to find out if any one can possibly do calculations faster than him. As a result he made a very great contest and asked every one to come and take part.

// In his contest he gave the contestants many different pairs of numbers. Each number is made from digits 0 or 1. The contestants should write a new number corresponding to the given pair
// of numbers. The rule is simple: The i-th digit of the answer is 1 if and only if the i-th digit of the two given numbers differ. In the other case the i-th digit of the answer is 0.

// Prateek made many numbers and first tried his own speed. He saw that he can perform these operations on numbers of length ∞ (length of a number is number of digits in it) in a glance!
// He always gives correct answers so he expects the contestants to give correct answers, too. He is a good fellow so he won't give anyone very big numbers and he always gives one person
// numbers of same length.

// Now you are going to take part in Shapur's contest. See if you are faster and more accurate.

// Input Format: The first line contains an integer t , the no. of testcases.
// There are two inputs in each line. Each of them contains a single number. It is guaranteed that the numbers are made from 0 and 1 only and that their length is same. The numbers may start
// with 0.
// Sample Input: 1
// 10111 10000
// Output Format: Write t lines — the corresponding answer to the corresponding input. Do not omit the leading 0s.
// Sample Output: 00111
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

    w(x) {
        string s1, s2; cin >> s1 >> s2;
        string ans = "";

        for (int i = 0; i < s1.size(); ++i) {

            if (s1[i] != s2[i]) ans += '1';
            else ans += '0';
        }

        cout << ans << endl;
    }

    return 0;
}