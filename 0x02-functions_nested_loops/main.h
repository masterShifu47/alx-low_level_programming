#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: Mac-collins Lawal
 * Description: Header file containing function declarations.
 */

/*
 * _putchar - Prints a character to the standard output.
 * @c: The character to be printed.
 *
 * Return: On success, returns the character printed as an unsigned char
 *         cast to an int. On error, returns -1.
 */
int _putchar(char c);

/*
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: Numbers are separated by a comma and a space.
 *              Numbers are printed in ascending order.
 *              The last number printed is always 98.
 */
void print_to_98(int n);

#endif /* MAIN_H */

