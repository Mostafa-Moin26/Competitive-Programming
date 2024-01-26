#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void clearRangBit(int &n, int i, int j) { //i = initial bit position, j = last bit position
    int mask1 = (-1) << ++j;
    int mask2 = ~((-1) << i);

    int mask = mask1 | mask2;

    n = n & mask;
}

void replaceBits(int &n, int m, int i, int j) {

    clearRangBit(n, i, j);

    n = n | (m << i);
}
int main() {

    Mostafa

    int n = 31;
    replaceBits(n, 5, 2, 4);

    cout << n << endl;

    return 0;
}