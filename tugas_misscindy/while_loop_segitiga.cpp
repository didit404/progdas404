#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    while (rows >= 1) {
        cout << string(rows, '*') << endl;
        rows--;
    }
    return 0;
}