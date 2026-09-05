#include <iostream>
#include <string>
using namespace std;

int index_end;

void gen(int index, string base_string) {
    int l = base_string.length();
    char end_char = (l >= 1) ? base_string[l - 1] : 'X';
    if (l == index_end) { // không được thêm condition, nếu không sẽ bị stack overflow
        if (end_char != 'H') {
            cout << base_string << "\n";
        }
        return;
    }
    for (char c : {'A', 'H'}) {
        if (c == 'H' && end_char == 'H') {
            continue;
        }
        gen(index + 1, base_string + c);
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> index_end;
        gen(1, "H");
    }
    return 0;
}
