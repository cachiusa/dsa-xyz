#include <iostream>
using namespace std;

int test() {
    float a, b;
    cin >> a >> b;
    if (a == 0) {
        return (b == 0) ? 1 : 0;
    } else {
        return ((b / a) > 0) ? 1 : 0;
    }
}

int main() {
    cout << test() << "\n";
    return 0;
}