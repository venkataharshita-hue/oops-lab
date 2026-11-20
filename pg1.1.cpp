#include <iostream>
using namespace std;

// Swap using REFERENCES
void swapRef(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

// Swap using POINTERS
void swapPtr(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x = 10, y = 20;

    swapRef(x, y);

    cout << "After swapRef: x=" << x
         << " y=" << y << endl;

    swapPtr(&x, &y);

    cout << "After swapPtr: x=" << x
         << " y=" << y << endl;

    int &alias = x;
    alias = 5;

    cout << "x via alias = " << x << endl;

    return 0;
}