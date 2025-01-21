#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score out of 100: ";
    cin >> score;

    // Using ternary operator
    char grade = (score >= 90) ? 'A' :
                 (score >= 80) ? 'B' :
                 (score >= 70) ? 'C' :
                 (score >= 60) ? 'D' :
                 (score >= 50) ? 'E' : 'F';

    cout << "...Your grade is " << grade <<"..."<< endl;

    // Using switch case
    switch (score / 10) {
        case 10:
        case 9:
            cout << "...Excellent work..." << endl;
            break;
        case 8:
            cout << "...Well done..." << endl;
            break;
        case 7:
            cout << "...Good job..." << endl;
            break;
        case 6:
            cout << "...You are passed, but you could do better..." << endl;
            break;
        case 5:
            cout << "...You need to practice more..." << endl;
            break;
        default:
            cout << "...Sorry you are failed..." << endl;
            break;
    }

    // Using if-else
    if (score >= 90) {
        cout << "...Congratulations..." << endl;
    } else if (score >= 80) {
        cout << "...Congratulations..." << endl;
    } else if (score >= 70) {
        cout << "...Congratulations..." << endl;
    } else if (score >= 60) {
        cout << "...Congratulations..." << endl;
    } else if (score >= 50) {
        cout << "Please try again next time" << endl;
    } else {
        cout << "Please try again next time" << endl;
    }
    return 0;
}