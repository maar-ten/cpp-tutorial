#include <vector>
#include <functional>
#include <iostream>

bool isOdd(int num){
    return num % 2 != 0;
}

std::vector<int> filterValues(const std::vector<int>& list, const std::function<bool(int)>& filter){
    std::vector<int> filteredValues(0);
    for (int num: list) {
        if (filter(num)) {
            filteredValues.push_back(num);
        }
    }
    return filteredValues;
}

int main() {
    std::vector<int> myList(4);
    myList.push_back(6);
    myList.push_back(7);
    myList.push_back(8);
    myList.push_back(9);

    std::vector<int> oddList = filterValues(myList, isOdd);

    for (int num: oddList) {
        std::cout << num << "\n";
    }

    return 0;
}