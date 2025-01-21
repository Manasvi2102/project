#include <iostream>
using namespace std;
int main() {
    char letter = 'a';
    
    do {
        cout << letter << " ";
        letter += 4; // Skip 3 letters
    } while (letter <= 'z');
    
    return 0;
}
