#include <iostream>
using namespace std;

int main() {
    int arr[] = {-8, 1, 4, 6, 10, 45};
    int target = 16;

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {   // important fix
            int result = arr[i] + arr[j];
            if (result == target) {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}
