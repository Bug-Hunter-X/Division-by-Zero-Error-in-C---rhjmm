#include <iostream>

int main() {
  int x = 10;
  int y = 0;

  if (y == 0) {
    std::cerr << "Error: Division by zero!\n";
    return 1; // Indicate an error
  } else {
    int z = x / y;
    std::cout << "Result: " << z << "\n";
  }

  return 0;
}