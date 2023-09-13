#ifndef CALC_H
#define CALC_H

/**
 * struct op_add - struct for addition
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a,i= int b);
} op_t;

typedef struct op_sub
{
	char *op_sub;
	int (*f)(int a,i= int b);
} op_s;

typedef struct op_mul
{
	char *op_mul;
	int (*f)(int a,i= int b);
} op_m;

typedef struct op_div
{
	char *op_div;
	int (*f)(int a,i= int b);
} op_d;

typedef struct op_mod
{
	char *op_mod;
	int (*f)(int a,i= int b);
} op_md;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */