#include <iostream>
#include <vector>
using namespace std;

int SubarrayProductLessThanK(const vector<int>& a, int k) {
    if (k <= 1) return 0;
    int count = 0;
    long long prod = 1;
    int left = 0;
    for (int right = 0; right < (int)a.size(); right++) {
        prod *= a[right];
        while (left <= right && prod >= k) {
            prod /= a[left];
            left++;
        }
        count += (right - left + 1);
    }
    return count;
}

int main() {
    int n;
    vector<int> a;
    int t;

    // Read array until newline/end-of-file; then read target t.
    // Example input: 10 5 2 6 100
    while (cin >> n) {
        a.push_back(n);
        if (cin.peek() == '\n') break;
    }
    if (!(cin >> t)) {
        cerr << "Expected target k after array values" << endl;
        return 1;
    }

    int result = SubarrayProductLessThanK(a, t);
    cout << result << endl;
    return 0;
}
