#include <string>
#include <iostream>

int main() {
    std::string sQuestion("How many miles?\n");
    std::string sMiles;

    std::cout << sQuestion;
    getline(std::cin, sMiles);

    double dMiles = std::stod(sMiles);
    double dKilometers = dMiles * 1.60394;

    printf("%.1f miles is equal to %.4f3 kilometers", dMiles, dKilometers);

    return 0;
}