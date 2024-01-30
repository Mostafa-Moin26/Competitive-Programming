#include<bits/stdc++.h>

using namespace std;

void filterChars(int n, string s) {

    int j = 0;

    while (n > 0) {

        int lastBit = n & 1;

        if (lastBit) {
            cout << s[j];
        }
        j++;
        n = n >> 1;
    }

    cout << endl;
}

void printSubsets(string s) {

    int n = s.size();

    for (int i = 0; i < (1 << n); ++i) {
        filterChars(i, s);
    }
}
int main() {

    string s; cin >> s;

    printSubsets(s);
    return 0;
}