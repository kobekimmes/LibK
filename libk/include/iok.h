#ifndef IOK_H
#define IOK_H

#include "stdk.h"
#include "sysk.h"

typedef struct {
    int fd;
    char* filename;
    short mode;

} k_file;


k_file* k_fopen(const char* filename);

int k_fclose(k_file file);

int k_fwrite();

int k_fread();

void k_print();

#endif // IOK_H