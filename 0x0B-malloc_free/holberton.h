#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

int _islower(int c);

int _isalpha(int c);

int _abs(int c);

int _isupper(int c);

int _isdigit(int c);

int _strlen(char *s);

void _puts(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void free_grid(int **grid, int height);

int **alloc_grid(int width, int height);

char *str_concat(char *s1, char *s2);

char *_strdup(char *str);

char *create_array(unsigned int size, char c);

#endif /*HOLBERTON_H*/
