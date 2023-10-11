int main() {
  const char message[] = "Hello, World!\n";
  const unsigned long message_length = sizeof(message) - 1;

  asm volatile (
    "mov $0x2000004, %%rax\n"         // Syscall number for write
    "mov $1, %%rdi\n"         // File descriptor for stdout
    "mov %0, %%rsi\n"         // Pointer to message
    "mov %1, %%rdx\n"         // Message length
    "syscall\n"               // Invoke the syscall
    :
    : "r" (message), "r" (message_length)
    : "%rax", "%rdi", "%rsi", "%rdx"
  );

  return 0;
}
