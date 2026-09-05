#include <iostream>
#include <string>
using namespace std;

string bin_add_1(string s) {
    int pos;
    for (
        pos = s.length();
        pos > 1 && s[pos] == '1';
        pos--
    ) {
        s[pos] = '0';
    }
    s[pos] = (pos == 1) ? '0' : '1';
    return s;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string tt;
        cin >> tt;
        cout << bin_add_1(tt) << "\n";
    }
    return 0;
}
