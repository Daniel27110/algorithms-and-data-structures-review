// Bubble Sort

// Description
// Bubble sort is a simple sorting algorithm that repeatedly steps through the listay, compares adjacent elements and swaps them if they are in the wrong order. - Wikipedia

// Strategy
// Starting from the beginning of the list, compare every adjacent pair, swap their position if they are not in the right order. After each iteration, one less element (the last one) is needed to be compared until there are no more elements left to be compared.

// Time Complexity
// O(n^2)

#include "dependencies.cpp"

void bubbleSort(vector<int> &list) {
    int n = list.size();

    for (int i = 0; i < n - 1; ++i) {

        for (int j = 0; j < n - i - 1; ++j) {

            if (list[j] > list[j + 1]) {

                swap(list[j], list[j + 1]);
            }
        }
    }
}

int main() {

    vector<int> list = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(list);

    cout << "Sorted list: ";

    for (int num : list) {

        cout << num << " ";
    }

    cout << endl;

    return 0;
}
