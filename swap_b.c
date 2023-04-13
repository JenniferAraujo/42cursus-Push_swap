#include "push_swap.h"

void	swap_b(t_stack **list_b, int flag)
{
	t_stack	*tmp;

	if (list_b && (*list_b)->next != NULL) //se 'list_b' existe e possui pelo menos dois elementos.
	{
		tmp = (*list_b)->next; //armazena o segundo elemento da pilha 'list_b' na variável 'tmp'.
		(*list_b)->next = tmp->next; //atualiza o ponteiro 'next' do primeiro elemento para apontar para o terceiro elemento da pilha.
		tmp->next = *list_b; //atualiza o ponteiro 'next' do segundo elemento para apontar para o primeiro elemento da pilha.
		*list_b = tmp; //atualiza o ponteiro da pilha 'list_b' para apontar para o elemento armazenado em 'tmp'
	}
	if (flag == 1) //Se flag for 1 indica que a operação foi realizada com sucesso e então print sb
		write(1, "sb\n", 3);
}

/*int main(void)
{
    t_stack *list_b;
    t_stack *new_node;
    int flag = 1;

    // Criando pilha com três elementos
    list_b = NULL;
    for (int i = 3; i > 0; i--)
    {
        new_node = (t_stack*)malloc(sizeof(t_stack));
        new_node->value = i;
        new_node->next = list_b;
        list_b = new_node;
    }

    // Imprimindo pilha antes da operação de swap
    printf("Antes da operação de swap: ");
    t_stack *tmp = list_b;
    while (tmp != NULL)
    {
        printf("%d ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");

    // Chamando a função ft_sb
    swap_b(&list_b, flag);

    // Imprimindo pilha depois da operação de swap
    printf("Depois da operação de swap: ");
    tmp = list_b;
    while (tmp != NULL)
    {
        printf("%d ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
    return (0);
}*/