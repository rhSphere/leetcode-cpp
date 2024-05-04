#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

#define x first
#define y second

using namespace std;

const int N = 10010;
typedef pair<int, pair<double, string> > PII;

vector<PII> ans;
int n, a;
double b;
string s;

int main() {
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> a >> b >> s;
        ans.push_back({a, {b, s}});
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans) {
        printf("%d %.2lf %s\n", i.x, i.y.x, i.y.y.c_str());
    }
    return 0;
}