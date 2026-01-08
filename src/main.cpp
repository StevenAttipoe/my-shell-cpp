#include <iostream>
#include <string>
using namespace std;

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";

  std::string command;
  getline(std::cin, command);

  cout << format("{}: command not found", command);
}
