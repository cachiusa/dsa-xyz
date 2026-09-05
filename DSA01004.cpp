/*
Cho hai số nguyên dương N và K.
Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần tử của 1, 2, .., N.

Input:
    Dòng đầu tiên đưa vào số lượng test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một cặp số tự nhiên N, K được viết trên một dòng.
    T, n thỏa mãn ràng buộc: 1 ≤ T ≤ 100; 1 ≤ k ≤ n ≤ 15.
Output:
    Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
    Input:
        2
        4  3
        5  3
    Output:
        123 124 134 234
        123 124 125 134 135 145 234 235 245 345
 */
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> subset;

void print(subset s) {
    for (int i : s) cout << i;
    cout << " ";
}

subset subset_add(subset ss, int n) {
    ss.push_back(n);
    return ss;
}

void gen(int series_end, int subset_len, subset s) {
    if (s.size() == subset_len) {
        print(s);
        return;
    }
    int subset_end = (!s.empty()) ? s.back() : 0;
    for (
        int next_num = subset_end + 1;
        next_num <= series_end;
        next_num++
    ) {
        gen(series_end, subset_len, subset_add(s, next_num));
    }
}

void test() {
    int n, k;
    cin >> n >> k;
    gen(n, k, {});
    cout << "\n";
}

int main() {
    int T; cin >> T;
    while (T--) test();
    return 0;
}