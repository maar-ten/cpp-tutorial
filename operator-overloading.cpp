#include <iostream>

class Box {
public:
    double length;
    double height;
    double breadth;

    Box(double length, double height, double breadth) : length(length), height(height), breadth(breadth) {}

    Box() = default;

    Box operator+(const Box &box) {
        Box boxSum{};
        boxSum.length = length + box.length;
        boxSum.height = height + box.height;
        boxSum.breadth = breadth + box.breadth;
        return boxSum;
    };
};

int main() {
    Box box(1, 1, 1);
    Box box2(10, 10, 10);

    Box plusBox = box + box2;

    std::cout << plusBox.length << "\n";

    return 0;
}