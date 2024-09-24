#include <iostream>
using namespace std;
int main() {
    // Example 1D array
    int arr1D[] = {1, 2, 3, 4, 5, 6};
    int n = 2;
    int m = 3;

    // Create a 2D array
    int arr2D[2][3];

    // Fill the 2D array with values from the 1D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr2D[i][j] = arr1D[i * m + j];
        }
    }

    // Print the 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}
