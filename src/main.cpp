#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while(true) {
    cout << "$ ";
    string simple_command;
    getline(std::cin, simple_command);

    size_t cmd_index = simple_command.find(' ');
    string cmd = simple_command.substr(0, cmd_index);

    if (cmd == "exit") {
      break;
    } 
    else if (cmd == "type") {
      string arg = simple_command.substr(cmd_index + 1);
      if (arg == "echo" || arg == "exit" || arg == "type") {
        cout << arg + " is a shell builtin" << endl;
      } else {
        cout << arg + ": not found" << endl;
      }
      continue;
    } 
    else if (cmd == "echo") {
      cout << simple_command.substr(5, simple_command.size() - 5) << endl;
      continue;
    }
    
    cout << simple_command + ": command not found" << endl;
  }

}
