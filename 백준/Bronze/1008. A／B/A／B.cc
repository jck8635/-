#include<iostream>

using namespace std;

int main(void) {
    double a, b, div;

    cin >> a >> b;

    div = a / b;
    cout.precision(10);
    cout << div;

    return 0;
}