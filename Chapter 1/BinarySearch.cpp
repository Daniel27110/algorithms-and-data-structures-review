// BINARY SEARCH

// Description
// Binary search a search algorithm that finds the position of a target value within a sorted listay. - Wikipedia

// Strategy
// Compare the target value to the middle element of the listay. If they are equal, the search is complete. If the target value is less than the middle element, repeat the search on the left half of the listay. If the target value is greater than the middle element, repeat the search on the right half of the listay. Continue this process until the target value is found or the search interval is empty.

// Time Complexity
// O(log n)

#include "dependencies.cpp"

int binarySearch(const vector<int> &list, int target) {

    int left = 0;
    int right = list.size() - 1;

    while (left <= right) {

        // Calculate the index of the middle element
        int mid = (left + right) / 2;

        // Check if target is at that mid position
        if (list[mid] == target) {

            return mid;
        }

        // If target is greater, ignore left half
        else if (list[mid] < target) {

            left = mid + 1;
        }

        // If target is smaller, ignore right half
        else if (list[mid] > target) {

            right = mid - 1;
        }
    }

    // Target not found
    return -1;
}

int main() {

    vector<int> list = {2, 3, 4, 10, 40};
    int target = 10;

    int result = binarySearch(list, target);
    cout << "Element is present at index " << result << endl;

    return 0;
}