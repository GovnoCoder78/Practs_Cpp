#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

void fillArray(vector<vector<int>>& arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 50;
        }
    }
}

void printArray(const vector<vector<int>>& arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void flattenArray(const vector<vector<int>>& arr, vector<int>& flatArr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flatArr.push_back(arr[i][j]);
        }
    }
}

void unflattenArray(const vector<int>& flatArr, vector<vector<int>>& arr, int rows, int cols) {
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = flatArr[index];
            index++;
        }
    }
}

int main() {
    srand(time(0));

    const int rows = 2 + rand() % 10;
    const int cols = 2 + rand() % 10;
    vector<vector<int>> arr(rows, vector<int>(cols));
    vector<int> flatArr;

    fillArray(arr, rows, cols);

    cout << "Unsorted array:" << endl;
    printArray(arr, rows, cols);

    cout << "\nвыберите тип сортировки: " << endl;
    string sortType;
    cin >> sortType;

    flattenArray(arr, flatArr, rows, cols);

    bool ascending = (sortType == "возрастание");
    if (ascending) {
        sort(flatArr.begin(), flatArr.end());
    } else {
        sort(flatArr.begin(), flatArr.end(), greater<int>());
    }

    unflattenArray(flatArr, arr, rows, cols);

    cout << "\nSorted array:" << endl;
    printArray(arr, rows, cols);

    return 0;
}
