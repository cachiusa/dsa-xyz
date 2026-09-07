#include <iostream>
#include <vector>
using namespace std;

int a[1002], b[1002];

int main() {
    int n; cin >> n;
    vector<int> ab_real;
    for (int i = 1; i <= n; i++) {
        cin >> a[i]; 
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1 || b[i] == 1) {
            ab_real.push_back(i);
        }
    }
    cout << ( ab_real.empty() ? 0 : ab_real.size() ) << "\n";
    for (int n : ab_real) {
        cout << n << " ";
    }
    return 0;
}
