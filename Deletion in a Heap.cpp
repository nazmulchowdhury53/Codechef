#include <bits/stdc++.h>
using namespace std;
void heapifyDown(vector<int>& heap, int index) {
    int size = heap.size();
    int smallest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
 if (leftChild < size && heap[leftChild] < heap[smallest]) {
        smallest = leftChild;
    }
 if (rightChild < size && heap[rightChild] < heap[smallest]) {
        smallest = rightChild;
    }
  if (smallest != index) {
        swap(heap[index], heap[smallest]);
        heapifyDown(heap, smallest);
    }
}
void deleteMin(vector<int>& heap) {
    int size = heap.size();
    if (size == 0) return;
    swap(heap[0], heap[size - 1]);
    heap.pop_back();
  heapifyDown(heap, 0);
}
void printHeap(const vector<int>& heap) {
    for (int num : heap) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> heap(n);
 for (int i = 0; i < n; i++) {
        cin >> heap[i];
    }
 while (!heap.empty()) {
        deleteMin(heap);
        printHeap(heap);
    }

    return 0;
}
