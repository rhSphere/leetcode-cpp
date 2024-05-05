#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    if (m % n == 0 or n % m == 0) {
        cout << "Multi"<<endl;
    } else {
        cout << "Nao Multi"<<endl;
    }
    return 0;
}