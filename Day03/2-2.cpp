#include <iostream>
using namespace std;

int x_size = 0;

bool average(int a[], int size, int& avg)
{
    // cout << sizeof(a) << " " << sizeof(a[0]) << endl;

    if (size <= 0 || size > x_size) return false;

    else {
        for (int i = 0; i < size; i++) {
            avg += a[i];
        }
        avg = avg / size;
        return true;
    }
}



int main() {
    int x[] = { 0,1,2,3,4,5 };
    int avg = 0;
    // cout << sizeof(x) << " " << sizeof(x[0]) << endl;
    x_size = sizeof(x) / sizeof(int);

    if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
    else cout << "매개 변수 오류" << endl;

    if (average(x, -1, avg)) cout << "평균은 " << avg << endl;
    else cout << "매개 변수 오류" << endl;

    // if (average(x, 7, avg)) cout << "평균은 " << avg << endl;
    // else cout << "매개 변수 오류" << endl;

    return 0;
}