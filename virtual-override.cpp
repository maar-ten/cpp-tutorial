#include <iostream>

class Top {
public:
    virtual void print() {
        std::cout << "I'm top!\n";
    }

    virtual void pureVirtual() = 0;
};

class Bottom : public Top {
public:
    void print() override {
        std::cout << "I'm bottom!\n";
    }

    void pureVirtual() override {
        std::cout << "It cannot be unprinted\n";
    }
};

void callPrint(Top &top){
    top.print();
}

int main() {

    Bottom bottom;
    callPrint(bottom);

    return 0;
}