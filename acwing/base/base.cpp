#include <iostream>

using namespace std;

// pair
using PII = pair<int, int>;
typedef pair<int, int> PII;
// 用作数据结构
vector<PII> nums;
using PV = pair<int, vector<int>>;

vector<int> nums(original); // 用数组初始化

make_pair(a, b); 
sort(tmp.begin(), tmp.end(), greater<int>());

unordered_ma<int, int> mp;
mp[k]++;
mp.find(k) != mp.end();

mp.count(k); // 返回 0/1

priority_queue<int> max_heap;
priority_queue<int, vector<int>, greater<int>> min_heap;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x):val(x), next(nullptr) {}
    ListNode(int x, ListNode* next_):val(x), next(next_) {}
};

