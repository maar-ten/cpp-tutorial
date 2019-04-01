#include <vector>
#include <numeric>
#include <iostream>

int main() {
    std::vector<int> integers(10);
    std::iota(integers.begin(), integers.end(), 1);

    for (auto i: integers) {
        if (i % 2 == 0) {
            std::cout << i << "\n";
        }
    }

    return 0;
}