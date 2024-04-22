
#include "../include/libk.h"


void k_exit(int status) {
    asm (
        "movq %0, %%rax\n" 
        //"movl %0, %%edi\n"
        //"xor %%rdi, %%rdi\n"
        "movl %1, %%edi\n"
        "syscall\n"

        :: "i" (SYS_EXIT),
          "r" (status)
        : "%rax", "%edi"
    );
}

int k_open(const char* filename, int flags, short mode) {
    int fd;
    asm( 
        "movq $2, %%rax\n"
        "movq %1, %%rdi\n"
        "movl %2, %%esi\n"
        "movw %3, %%dx\n"
        "syscall\n"

        : "=a" (fd)        // Output: File descriptor returned by open syscall
        : "i" (SYS_OPEN),
         "r" (filename),  // Input: Filename
          "r" (flags),     // Input: Flags
          "r" (mode)       // Input: Mode
        :
    );

    return fd;
}


int k_close(int fd) {
    return 0;
}


int k_read(int fd, char* buf, int count) {
    return 0;
}

int k_write(int fd, const char* buf, int count) {
    return 0;
}