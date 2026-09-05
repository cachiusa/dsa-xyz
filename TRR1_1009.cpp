/*
    (Thời gian chạy chương trình không quá 1 giây)
    Cho trước hai số thực a và b. Xét mệnh đề p = “Phương trình ax + b = 0 có ít nhất một nghiệm thực âm”.
    Yêu cầu: Xác định giá trị của p với hai số thực a và b đã cho.
    Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa hai số thực a và b.
    Kết quả: Ghi ra tệp Output chuẩn là giá trị của p.
 */
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