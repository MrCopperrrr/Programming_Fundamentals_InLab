#include <unordered_set>
bool checkElementsUniqueness(int* arr, int n) {
    std::unordered_set<int> uniqueElements;
    for (int i = 0; i < n; ++i) {
        if (uniqueElements.find(arr[i]) != uniqueElements.end()) {
            return false;
        }
        uniqueElements.insert(arr[i]);
    }
    return true;
}