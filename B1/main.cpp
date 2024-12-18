#include <iostream>
using namespace std;

int main()
{
    // Input - output trong C++
    // int a; // Giá trị mặc định của biến int khi khai báo là 0
    // double b;

    // cout << b; // 0.0
    // string c;
    // cout << c; // ""
    // Input: nhập vào giá trị:
    // cin >> a;
    // cout << a;
    // Input: radius -> in ra dien tich hinh tron (PI * r * r)

    // int r;
    // cin >> r;
    // cout << 3.14 * r * r;
    // Toán tử số học trong C++:
    // + - * [/ % ] (chia lấy dư)
    // int a = 5;
    // int b = 3;
    // cout << a + b; // 8
    //  5 : 3 = 1.66667 -> phần nguyên là 1 -> 5 - 1 *3 = 2
    //  17 : 3 = 5.67 -> phần nguyên là 5 -> 17 - 5 * 3 = 2
    //  / là chia lấy phần nguyên
    //  cout << a / b; // 1
    //  cout << a % b; // 2
    /*
    Bài 1: Khai báo các biến sau trong C++:
    int i1 = 2, i2 = 5, i3 = -3;
    double d1 = 2.0, d2 = 5.0, d3 = -0.5;

    Thực hiện và giải thích kết quả của các biểu thức sau:
    i1 + (i2 * i3) = -13
    i1 * (i2 + i3) = 4
    i1 / (i2 + i3) (Lưu ý phép chia số nguyên) = 1
    i1 / i2 + i3 (Lưu ý phép chia số nguyên) = -3
    3 + 4 + 5 / 3 (Lưu ý thứ tự ưu tiên) = 8
    (3 + 4 + 5) / 3 = 4
    d1 + (d2 * d3) = -0.5
    d1 / d2 - d3 = 0.9
    d1 / (d2 - d3) = 0.3636..
    d1 + d2 + d3 / 3 =  6.833 ...
    */
    // Toán tử 1 ngôi:
    int a = 2;
    int b = 3;
    int p = a + b;
    // Toán tử 1 ngôi: a++ a-- a+=1 a-=1 a*=2 a/=2
    // Tăng giá trị biến a lên 2 đơn vị:
    a += 2; // a = 4
    // a *= 2; // a = 8
    //  a = a *2; = 4 * 2 = 8
    // cout << a; // 4
    a++; // a++++
    a--; // Trừ đi 1 đơn vị
    // Toán tử so sánh: > < >= <= =
    int x = 5;
    int y = 4;
    bool kq = x = y; // 1: là true - 0 là false
    cout << kq;
    return 0;
}
