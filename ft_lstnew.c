#include "push_swap.h"

t_stack	*ft_lstnew(void *value)
{
	t_stack	*node;

	node = (t_stack *) malloc (sizeof(t_stack));
	if (!node)
		return (0);
	node->value = value;
	node->next = NULL;
	return (node);
}
