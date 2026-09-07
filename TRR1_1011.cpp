/*
    Cho trước ba số thực a, b và c. Xét mệnh đề p = “Phương trình ax^4 + bx^2 + c = 0 có ít nhất một nghiệm thực”.
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
    float y1 = 0;
    float y2 = 0;
    y1 = (-b + sqrt(d)) / 2.0*a;
    y2 = (-b - sqrt(d)) / 2.0*a;
    /*
        Bạn có thể bê nguyên bài TRR1_1010 để giải bài này.
        Khi đặt y = x^2, chỉ cần y1/y2 >= 0 thì x^2 cũng >=0
        --> x >= 0
     */
    return (y1 > 0 || y2 > 0) ? 1 : 0;
}

int main() {
    cout << test() << "\n";
    return 0;
}