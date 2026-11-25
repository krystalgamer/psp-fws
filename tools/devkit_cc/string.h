#ifndef _STRING_H
#define _STRING_H
#define NULL ((void *)0)
typedef unsigned int size_t;
void *memset(void *, int, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
int memcmp(const void *, const void *, size_t);
size_t strlen(const char *);
char *strcpy(char *, const char *);
int strcmp(const char *, const char *);
#endif
