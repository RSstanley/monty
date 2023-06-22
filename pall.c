#include "monty.h"

/**
 * pall - calls print_stack func
 */
void pall(stack_t **stack, unsigned int ln __attribute__((unused)))
{
	print_stack(*stack);
}
