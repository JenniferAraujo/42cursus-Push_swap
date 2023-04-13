#include "push_swap.h"

void	sa_sb(t_stack **list_a, t_stack **list_b)
{
	swap_a(list_a, 0);
	swap_b(list_b, 0);
	write(1, "ss\n", 3);
}