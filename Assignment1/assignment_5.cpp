#include <iostream>
#include <string>
using namespace std;

int findFirstZeroIndex(const string& S, int left, int right) {
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (S[mid] == '0') {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int k;
    string S;

    cin >> k;
    cin >> S;


    int firstZeroIndex = findFirstZeroIndex(S, 0, k);
    int numZeros = k - firstZeroIndex;


    cout << numZeros << endl;

    return 0;
}
