#ifndef CALC_H
#define CALC_H
#include <stddef.h>

/**
 * struct op - struct op
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*op_t add = {"+", op_add};
op_t sub = {"-", op_sub};
op_t mul = {"*", op_mul};
op_t div = {"/", op_div};
op_t mod = {"%", op_mod};*/

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
