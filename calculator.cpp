#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::cout << "Enter equation : ";
    std::string equation;
    getline(std::cin, equation);

    std::stringstream ss(equation);
    std::vector<std::string> equationParts;
    std::string part;

    while (getline(ss, part, ' ')) {
        equationParts.push_back(part);
    }

    int first = std::stoi(equationParts[0]);
    std::string operation = equationParts[1];
    int second = std::stoi(equationParts[2]);

    if (operation == "+") {
        std::cout << equation << " = " << (first + second) << "\n";
    } else if (operation == "-") {
        std::cout << equation << " = " << (first - second) << "\n";
    } else if (operation == "/") {
        std::cout << equation << " = " << (first / second) << "\n";
    } else if (operation == "*") {
        std::cout << equation << " = " << (first * second) << "\n";
    } else {
        std::cout << "Supported operations are +, -, *, /";
    }

    return 0;
}
