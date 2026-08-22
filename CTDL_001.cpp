/*
Một xâu nhị phân độ dài n (n < 10) được gọi là thuận nghịch hay đối xứng nếu đảo ngược xâu nhị phân đó ta vẫn nhận được chính nó.
Cho số tự nhiên n (n nhập từ bàn phím).
Hãy viết chương trình liệt kê tất cả các xâu nhị phân thuận nghịch có độ dài n.
Hai phần tử khác nhau của xâu thuận nghịch được ghi cách nhau một khoảng trống.

Ví dụ
Input  | Output
4      |
       | 0 0 0 0
       | 0 1 1 0
       | 1 0 0 1
       | 1 1 1 1
*/
#include <iostream>
#include <string>
using namespace std;

bool odd;

void print(string s) {
    string s_reversed(s.rbegin(), s.rend());
    if (odd) {
        for (char c : {'0', '1'}) {
            for (char i : s) cout << i << " ";
            cout << c << " ";
            for (char i : s_reversed) cout << i << " ";
            cout << "\n";
        }
    } else {
        for (char i : s) cout << i << " ";
        for (char i : s_reversed) cout << i << " ";
        cout << "\n";
    }
}

void gen(int index_end, int index, string base_string) {
    if (index > index_end) {
        print(base_string);
        return;
    }
    for (char c : {'0', '1'}) {
        gen(index_end, index + 1, base_string + c);
    }
}

int main() {
    int t; cin >> t;
    odd = (t % 2 != 0);
    gen(int(t/2), 1, "");
    return 0;
}
