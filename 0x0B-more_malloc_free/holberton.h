#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _atoi(char *s);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *str);
int _strlen(char *s);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void print_triangle(int size);
void fizz_buzz(void);
void print_square(int size);
void print_diagonal(int n);
void print_line(int n);
void more_numbers(void);
void print_most_numbers(void);
int _putchar(char c);
void print_numbers(void);
int mul(int a, int b);
int _isdigit(int c);
int _isupper(char c);
void positive_or_negative(int i);
int largest_number(int a, int b, int c);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* HOLBERTON_H */
