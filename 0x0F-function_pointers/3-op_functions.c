#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum
 * @a: first number.
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: first number.
 * @b: second number
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first number.
 * @b: second number
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first number.
 * @b: second number
 * Return: dividion
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulos
 * @a: first number.
 * @b: second number
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
