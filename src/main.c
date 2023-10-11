#include <stddef.h>
#include <sys/syscall.h>

int main() {
  const char message[] = "Hello, World!\n";
  const size_t message_length = sizeof(message) - 1;
  
  syscall(4, 1, message, message_length);
  
  return 0;
}
