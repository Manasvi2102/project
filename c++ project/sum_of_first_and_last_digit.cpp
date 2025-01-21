#include <iostream>
using namespace std;

int main() {
    int num, firstno, lastno, sum;

    cout << "Enter a number: ";
    cin >> num;

    lastno = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    firstno = num;

    sum = firstno + lastno;

    cout << "Sum of first and last digit: " << sum << endl;

    return 0;
}
