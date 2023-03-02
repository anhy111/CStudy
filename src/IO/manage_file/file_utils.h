#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <stdio.h>
int read_file(char* filename);
int write_file(char* filename);
int append_file(char* filename);
int remove_file(char* filename);

#endif /* FILE_UTILS_H */
