#include "push_swap.h"

void	rotate_b(t_stack **list_b, int flag)
{
	t_stack	*tmp;

	if ((*list_b)->next == NULL) //verifica se a pilha tem apenas um elemento
		return ;
	tmp = (*list_b)->next; //salva o segundo elemento da pilha em uma variável temporária
	(*list_b)->next = NULL; //define o próximo elemento do primeiro como nulo
	ft_lstaddback(&tmp, *list_b);//adiciona o primeiro elemento no final da pilha
	*list_b = tmp; //atualiza o ponteiro para o início da pilha
	if (flag == 1) //se flag for 1 indica que a operação foi realizada com sucesso e então print rb
		write(1, "rb\n", 3);
}


/*int main(void)
{
    t_stack *stack = NULL;
    t_stack *elem1 = malloc(sizeof(t_stack));
    elem1->value = 3;
    elem1->next = NULL;
    ft_lstaddback(&stack, elem1);

    t_stack *elem2 = malloc(sizeof(t_stack));
    elem2->value = 2;
    elem2->next = NULL;
    ft_lstaddback(&stack, elem2);

    t_stack *elem3 = malloc(sizeof(t_stack));
    elem3->value = 1;
    elem3->next = NULL;
    ft_lstaddback(&stack, elem3);
    t_stack *current = stack;
    printf("Antes da rotação: ");
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
    rotate_b(&stack, 1);
    current = stack;
    printf("Após a rotação: ");
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
    while (stack != NULL)
    {
        t_stack *temp = stack;
        stack = stack->next;
        free(temp);
    }
    return 0;
}*/