#include <bits/stdc++.h>
using namespace std;
int toThePower(int n, int m) {
    if (m == 0) {
        return 1;
    } else {
        return n * toThePower(n, m - 1);
    }
}

int main() {
    int n, m;
    cin >> n>>m;
cout << toThePower(n, m) << "\n";
    return 0;
}
