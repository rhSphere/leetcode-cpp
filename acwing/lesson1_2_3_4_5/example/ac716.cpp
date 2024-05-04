#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, y , a;
    for (int i = 1; i <= 10; i++) {
        cin >> a;
        if (a > x) {
            x = a;
            y = i;
        }
    }
    cout << x << endl << y << endl;
    return 0;
}