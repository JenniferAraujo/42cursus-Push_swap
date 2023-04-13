#include "push_swap.h"

int	main(int argc, char *argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 3)
		return (0);
	stack_a = ft_lstnew(atoi(argv[1]));
	stack_b = NULL;
	ft_lstaddback(&stack_a, ft_lstnew(atoi(argv[2])));
	ft_lstaddback(&stack_a, ft_lstnew(atoi(argv[3])));

	rotate_a(&stack_a, 1);
	swap_a(&stack_a, 1);
	//pa(&stack_a, &stack_b);
	return (0);
}

