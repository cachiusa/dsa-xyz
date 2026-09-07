/*
    Cho trước ba số thực a, b và c. Xét mệnh đề p = “Phương trình ax^2 + bx + c = 0 có ít nhất một nghiệm thực dương”.
 */
#include <iostream>
#include <cmath>
using namespace std;

int x_linear(float a, float b) {
    if (a == 0) {
        return (b == 0) ? 1 : 0;
    } else {
        return ((b / a) < 0) ? 1 : 0;
    }
}

int test() {
    float a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        return x_linear(b, c);
    }
    float d = b*b - 4*a*c;
    if (d < 0) {
        return 0;
    }
    float x1 = 0;
    float x2 = 0;
    x1 = (-b + sqrt(d)) / 2.0*a;
    x2 = (-b - sqrt(d)) / 2.0*a;
    return (x1 > 0 || x2 > 0) ? 1 : 0;
}

int main() {
    cout << test() << "\n";
    return 0;
}