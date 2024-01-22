#include<bits/stdc++.h>

using namespace std;

bool isOdd(int n) {
    return (n & 1);
}

int getBit(int n, int i) { // counting bit right to left and starting bit is 0th bit

    return n & (1 << i) > 0 ? 1 : 0;
}

void setBit(int &n, int i) {

    n = n | (1 << i);
}

void clearBit(int &n, int i) {

    int mask = ~(1 << i);

    n = n & mask;
}

void updateBit(int &n, int i, int v) {
    // first clear ith bit
    clearBit(n, i);

    int mask = (v << i);

    n = n | mask;
}

void clearLastIBit(int &n, int i) {

    int mask = (-1) << i;

    n = n & mask;
}

void clearRangBit(int &n, int i, int j) { //i = initial bit position, j = last bit position
    int mask1 = (-1) << ++j;
    int mask2 = ~((-1) << i);

    int mask = mask1 | mask2;

    n = n & mask;
}
int main() {

    int num = 31;

    clearRangBit(num, 1, 3);

    cout << num << endl;
}