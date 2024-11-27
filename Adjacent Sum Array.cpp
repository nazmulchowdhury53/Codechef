#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> reconstructArray(int size, vector<int>& adjacentSums) {
    sort(adjacentSums.begin(), adjacentSums.end());
 for (int startValue = 1; startValue <= adjacentSums.back(); ++startValue) {
        vector<int> reconstructedArray = {startValue};
for (int i = 0; i < size - 1; ++i) {
            int nextValue = adjacentSums[i] - reconstructedArray.back();
            if (nextValue <= 0) {
                isValid = false;
                break;
            }
            reconstructedArray.push_back(nextValue);
        }
 vector<int> calculatedSums;
        for (int j = 0; j < reconstructedArray.size() - 1; ++j) {
            calculatedSums.push_back(reconstructedArray[j] + reconstructedArray[j + 1]);
        }
        sort(calculatedSums.begin(), calculatedSums.end());
 if (calculatedSums == adjacentSums) {
            return reconstructedArray;
        }
    }
 return {};
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;
        vector<int> adjacentSums(arraySize - 1);
 for (int i = 0; i < arraySize - 1; ++i) {
            cin >> adjacentSums[i];
        }
 vector<int> result = reconstructArray(arraySize, adjacentSums);
if (!result.empty()) {
            for (int value : result) {
                cout << value << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

