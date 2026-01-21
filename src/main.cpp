#include <iostream>
#include <string>
using namespace std;

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while(true) {
    cout << "$ ";
    string command;
    getline(std::cin, command);

    if (command == "exit") {
      break;
    } else if (command.size() > 4 && command.substr(0, 4) == "echo") {
      cout << command.substr(5, command.size() - 5) << endl;
      continue;
    }
    

    cout << command + ": command not found" << endl;
  }

}
