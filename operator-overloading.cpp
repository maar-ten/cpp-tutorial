#include <iostream>

class Box {
public:
    double length;
    double height;
    double breadth;

    Box(double length, double height, double breadth) : length(length), height(height), breadth(breadth) {}

    void operator +(Box &box) {
        length = box.length;
        height = box.height;
        breadth = box.breadth;
    };
};

int main() {
    Box box(1, 1, 1);
    Box box2(10, 10, 10);

    box + box2;

    std::cout << box.length << "\n";

    return 0;
}