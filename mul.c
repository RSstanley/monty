#include "monty.h"

/**
  * _mul - multiplies top two elements of stack
  * Description: multiplies last two and removes top node,
  * prints error if stack is shorter than two nodes
  */
void _mul(stack_t **stack, unsigned int ln)
{
	int a;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	a = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, ln);
	(*stack)->n = a;
}
