#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getNthUglyNumber(int n) {
    vector<int> uglyNumbers = {1};
    int i2 = 0, i3 = 0, i5 = 0;
    int nextMultipleOf2 = 2, nextMultipleOf3 = 3, nextMultipleOf5 = 5;

    while (uglyNumbers.size() < n) {
        int nextUglyNumber = min({nextMultipleOf2, nextMultipleOf3, nextMultipleOf5});
        uglyNumbers.push_back(nextUglyNumber);

        if (nextUglyNumber == nextMultipleOf2) {
            i2++;
            nextMultipleOf2 = uglyNumbers[i2] * 2;
        }

        if (nextUglyNumber == nextMultipleOf3) {
            i3++;
            nextMultipleOf3 = uglyNumbers[i3] * 3;
        }

        if (nextUglyNumber == nextMultipleOf5) {
            i5++;
            nextMultipleOf5 = uglyNumbers[i5] * 5;
        }
    }

    return uglyNumbers.back();
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int result = getNthUglyNumber(n);
        cout << result << endl;
    }

    return 0;
}