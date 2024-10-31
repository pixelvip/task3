#include <iostream>
#include "Searching.cpp"

int main() {
    std::vector<int> vec = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70}; // Already sorted
    int target;
    std::cout << "Enter the value of target: ";
    std::cin >> target;

    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search. The specified element found at indexx: " << index << std::endl;
    } else {
        std::cout << "Binary search. The specified element was not found in the vector:" << std::endl;
    }

    index = binarySearchFirst(vec, target);
    if (index != -1) {
        std::cout << "Binary search (first). The specified element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first). The specified element not found in the vector." << std::endl;
    }

    index = linearSearch(vec, target);
    if (index != -1) {
        std::cout << "Linear search. The specified element found at index: " << index << std::endl;
    } else {
        std::cout << "Linear search. The specified element not found in the vector." << std::endl;
    }

    std::array<int, 10> arr = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70};
    index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Binary search. The specified element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search. The specified element not found in the array." << std::endl;
    }

    index = binarySearchFirst(arr, target);
    if (index != -1) {
        std::cout << "Binary search (first). The specified element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first). The specified element not found in the array." << std::endl;
    }

    index = linearSearch(arr, target);
    if (index != -1) {
        std::cout << "Linear search. The specified element found at index: " << index << std::endl;
    } else {
        std::cout << "Linear search. The specified element not found in the array." << std::endl;
    }

    return 0;
}
