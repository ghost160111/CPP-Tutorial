# Your first program

```C++
#include <iostream>
#include <string>
#include <vector>

void logMessage(std::vector<std::string> messageList) {
  for (int i = 0; i < messageList.size(); ++i) {
    std::cout << messageList[i] << std::endl;
  }
}

int main() {
  logMessage({"C++ log message", "Another C++ log message", "Last C++ log message!"});
  /* Logs:
    C++ log message
    Another C++ log message
    Last C++ log message!
  */

  return 0;
}
```
