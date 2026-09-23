#include <iostream>
#include <limits>

int main() {
    std::cout << "Float Min: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Float Max: " << std::numeric_limits<float>::max() << "\n\n";

    std::cout << "Double Min: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "Double Max: " << std::numeric_limits<double>::max() << "\n";

    return 0;
}
