#include<iostream>
#include<vector>
#include<ranges>
#include<algorithm>

using namespace std;

void oldone() {//传统写法
    vector<int> v = { 5, 2, 9, 1 };
    sort(v.begin(), v.end());           // 要写 .begin() .end()
    auto it = find(v.begin(), v.end(), 9);
    int maxVal = *max_element(v.begin(), v.end());
}

void newone() {//新的写法
    vector<int> v = { 5, 2, 9, 1 };
    ranges::sort(v);                     // 直接传 v 就行
    auto it = ranges::find(v, 9);
    int maxVal = ranges::max(v);          // 你用的就是这个！
}

int main() {
    return 0;
}
