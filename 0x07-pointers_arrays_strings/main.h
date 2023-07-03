#ifndef MAIN_H
#define MAIN_H

/* Task 0: _memset */
void *_memset(void *s, int c, unsigned int n);

/* Task 1: _memcpy */
void *_memcpy(void *dest, const void *src, unsigned int n);

/* Task 2: _strchr */
char *_strchr(char *s, char c);

/* Task 3: _strspn */
unsigned int _strspn(char *s, char *accept);

/* Task 4: _strpbrk */
char *_strpbrk(char *s, char *accept);

/* Task 5: _strstr */
char *_strstr(char *haystack, char *needle);

/* Task 6: print_chessboard */
void print_chessboard(char (*a)[8]);

/* Task 7: print_diagsums */
void print_diagsums(int *a, int size);

#endif /* MAIN_H */

