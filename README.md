mac-os-helloworld
=================
```c
#include <unistd.h>

int main() {
  const char message[] = "Hello, World!\n";
  const size_t message_length = sizeof(message) - 1;
  
  write(STDOUT_FILENO, message, message_length);
  
  return 0;
}
```
