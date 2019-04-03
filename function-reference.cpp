#include <vector>
#include <functional>
#include <iostream>

bool isOdd(int num){
    return num % 2 != 0;
}

std::vector<int> filterValues(const std::vector<int>& list, const std::function<bool(int)>& filter){
    std::vector<int> filteredValues;

    for (int num: list) {
        if (filter(num)) {
            filteredValues.push_back(num);
        }
    }
    return filteredValues;
}

int main() {
    std::vector<int> myList {6, 7, 8, 9};

    std::vector<int> oddList = filterValues(myList, isOdd);

    for (int num: oddList) {
        std::cout << num << "\n";
    }

    return 0;
}