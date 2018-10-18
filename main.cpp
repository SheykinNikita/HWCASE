#include <iostream>
float bar(float a, char b, float c) {
    switch (b) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
    }
}
int main() {
    float a;
    char b;
    float c;
    std::cout << "First number";
    std::cin >> a;
    std::cout << "Second number";
    std::cin >> c;
    std::cout << "(+,-,*,/)";
    std::cin >> b;
    std::cout << bar(a, b, c) << '\n';
    return 0;
}