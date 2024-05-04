#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0;
    do {
        cin >> a;
        if (a > 0) {
            for (int i = 1; i <= a; i++) 
                cout << i << " ";
            cout << endl;
        }
    } while(a != 0);

    // 逗号表达式
    int x;
    while (cin >> x, x) {
        for (int i = 1; i <= x; i++) cout << i << ' ';
        cout << endl;
    }

    return 0;
}