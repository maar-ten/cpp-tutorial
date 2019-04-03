#include <ctime>
#include <cstdlib>
#include <iostream>

void generateHeadsAndTails(int numberOfThrows, int &heads, int &tails) {
    for (int i = 0; i < numberOfThrows; i++) {
        int thrown = std::rand() % 2;
        if (thrown == 0) {
            heads++;
        } else {
            tails++;
        }
    }
}

int main() {
    srand(time(nullptr));

    int heads = 0;
    int tails = 0;

    generateHeadsAndTails(100, heads, tails);

    std::cout << "Heads : " << heads << "\n";
    std::cout << "Tails : " << tails << "\n";

    return 0;
}