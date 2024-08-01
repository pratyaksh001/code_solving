#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isValidInput(int input) {
    return input >= 1 && input <= 50;
}

int main() {
    int rows, cols, layers;
    
    // Input dimensions
    cin >> rows;
    if (!isValidInput(rows)) {
        cout << "Invalid input. Please enter a value between 1 and 50." << endl;
        return 0;
    }
    
    cin >> cols;
    if (!isValidInput(cols)) {
        cout << "Invalid input. Please enter a value between 1 and 50." << endl;
        return 0;
    }
    
    cin >> layers;
    if (!isValidInput(layers)) {
        cout << "Invalid input. Please enter a value between 1 and 50." << endl;
        return 0;
    }

    // Create 3D matrix
    vector<vector<vector<int>>> matrix(rows, vector<vector<int>>(cols, vector<int>(layers)));

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < layers; k++) {
                cin >> matrix[i][j][k];
            }
        }
    }

    // Find duplicates
    unordered_set<int> seen;
    bool foundDuplicate = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < layers; k++) {
                int current = matrix[i][j][k];
                if (seen.find(current) != seen.end()) {
                    cout << "Duplicate element found: " << current 
                         << " at position (" << i << ", " << j << ", " << k << ")" << endl;
                    foundDuplicate = true;
                } else {
                    seen.insert(current);
                }
            }
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicate elements found in the 3D matrix." << endl;
    }

    return 0;
}
