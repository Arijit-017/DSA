#include <iostream>
using namespace std;

int bitInsertion(int x, int y, int a, int b) {
    int clearMask = (~0 << (b + 1)) | ((1 << a) - 1);
    x &= clearMask;
    y <<= a;
    x |= y;
    return x;
}

int main() {
    int x, y, a, b;
    int result;

    cin >> x;
    cin >> y;
    cin >> a;
    cin >> b;

    if (a < 0 || a > 31 || b < 0 || b > 31 || a > b) {
        cout << "Invalid input." << endl;
    } else {
        result = bitInsertion(x, y, a, b);
        cout << result << endl;
    }

    return 0;
}
