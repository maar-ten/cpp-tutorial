#include <string>
#include <iostream>
#include <numeric>
#include <vector>

double Range(double start, int end, double interest);

int main() {
    double amount = 0;
    std::cout << "How much to invest : ";
    std::cin >> amount;

    double interest = 0;
    std::cout << "Interest rate : ";
    std::cin >> interest;

    std::cout << "After 10 years you'll have : " << Range(amount, 10, interest) << "\n";

    return 0;
}

double Range(double start, int end, double interest) {
    double result = start;
    for (int i = 1; i <= end; i++) {
        double factor = 1 + interest / 100;
        result = result * factor;
    }
    return result;
}
