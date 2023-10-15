#include <iostream>
#include <string>
#include <vector>

// static Library 
static class Library {
public:
  static void log(std::vector<std::string> logMessages) {
    for (int i = 0; i < logMessages.size(); ++i) {
      std::cout << logMessages[i] << std::endl;
    }
  }
};

// global function
void logMessage(std::vector<std::string> messageList) {
  for (int i = 0; i < messageList.size(); ++i) {
    std::cout << messageList[i] << std::endl;
  }
}

// entry point of program
int main() {
  logMessage({"C++ log message", "Another C++ log message", "Last C++ log message!"});
  /* Logs:
    C++ log message
    Another C++ log message
    Last C++ log message!
  */
  
  Library::log({"C++ log message", "Another C++ log message", "Last C++ log message!"});
  /* Logs:
    C++ log message
    Another C++ log message
    Last C++ log message!
  */

  return 0;
}
