#ifndef SYSK_H
#define SYSK_H

#define SYS_EXIT 60
#define SYS_OPEN 2
#define SYS_CLOSE 3
#define SYS_READ 0
#define SYS_WRITE 1

void k_exit(int errno);

int k_open(const char* filename, int flags, short mode);

int k_close(int fd);

int k_read(int fd, char* buf, int count);

int k_write(int fd, const char* buf, int count);

#endif // SYSK_H