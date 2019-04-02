#include <iostream>

class Top {
public:
    virtual void print() {
        std::cout << "I'm top!\n";
    }
};

class Bottom : public Top {
public:
    Bottom()= default;

    void print() override {
        std::cout << "I'm bottom!\n";
    }
};

void callPrint(Top &top){
    top.print();
}

int main() {

    Bottom bottom = Bottom();
    callPrint(bottom);

    return 0;
}