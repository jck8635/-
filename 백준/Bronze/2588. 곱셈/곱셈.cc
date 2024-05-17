#include<iostream>

using namespace std;

int main(void) {
    int A, B;

    cin >> A >> B;

    cout << A*(B%10) << endl;
    cout << A*(B%100/10) << endl;
    cout << A*(B/100) << endl;

    cout << (A*(B%10)) + (A*(B%100/10) * 10) + (A*(B/100)*100) << endl;

    return 0;
}