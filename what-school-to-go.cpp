#include <iostream>

int main() {

    std::string sAge;

    std::cout << "Enter age : ";
    getline(std::cin, sAge);

    int nAge = std::stoi(sAge);

    if (nAge == 5) {
        std::cout << "Go to kindergarten\n";
    } else if (nAge >= 6 && nAge <= 17) {
        int nGrade = nAge - 5;
        std::cout << "Go to grade " << nGrade << "\n";
    } else if (nAge > 17) {
        std::cout << "Go to college\n";
    } else {
        std::cout << "Too young for school";
    }


    return 0;
}