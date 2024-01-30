#include <iostream>
using namespace std;

int isSquare(int n, int low, int high) {
    int mid = (low + high) / 2;
    if (low > high)
        return -1;
    if (mid * mid == n) {
        return 1;
    } else if ((mid * mid) > n) {
        return isSquare(n, low, mid - 1);
    } else {
        return isSquare(n, mid + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int found = isSquare(n, 1, n);
    if (found == -1) {
        cout << "Not a square";
    } else {
        cout <<n<< " is a square";
    }
}
