#include <bits/stdc++.h>
using namespace std;

int fact(int);
int max(int, int);
int gcd(int, int);

int main() {
    int n;
    cin >> n;
    cout << fact(n) << endl;
    cout << max(2, 4) << endl;
    cout << gcd(120, 40) << endl;
    return 0;
}

int fact(int n) {
    // int res = 1;
    if (n == 1) return 1;
    return n * fact(n-1);
}

int max(int x, int y) {
    if (x > y) return x;
    return y;
}

int gcd(int a, int b) {
    int t;
    t = a % b;
    while (t != 0) {
        a = b;
        b = t;
        t = a % b;
    }
    return b;
}
void swap(int& x, int& y) {
    if (x == y) return;
    int t = x;
    x = y;
    y = t;
}

void print(int a[][100], int row, int col) {
    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int sum(int l, int r) {
    int s = 0; 
    for (int i = l; i <= r; i++) s += i;
    return s;
}

void copy(int a[], int b[], int size) {
    memcpy(b, a, size * 4);
}

int lcm(int a, int b) {
    if (a % b == 0) return b;
    return lcm(b, a%b);
}

int gcm(int a, int b) {
    return a * b / lcm(a, b);
}

// getline我觉得是读入字符串最好的函数
// scanf和cin都是读不进空格的

void reverse(int a[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }
}

int uniq(int a[], int n) {
    sort(a, a + n);
    return unique(a, a + n) - a;
}

int sort(int a[], int l, int r) {
    for (int i = l; i <= r; i++) {
        for (int j = i + 1; j <= r; j++) {
            if (a[j] < a[i]) {
                swap(a[i], a[j]);
            }
        }
    }
}