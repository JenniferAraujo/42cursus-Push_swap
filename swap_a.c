#include "push_swap.h"

void	swap_a(t_stack **list_a, int flag)
{
	t_stack	*tmp;

	if (list_a && (*list_a)->next != NULL) //verifica se a list_a existe e possui pelo menos dois elementos
	{	
		tmp = (*list_a)->next; //armazena o segundo elemento da pilha 'list_a' na variável 'tmp'
		(*list_a)->next = tmp->next;//atualiza o ponteiro 'next' do primeiro elemento para apontar para o terceiro elemento da pilha.
		tmp->next = *list_a; //atualiza o ponteiro 'next' do segundo elemento para apontar para o primeiro elemento da pilha.
		*list_a = tmp; //atualiza o ponteiro da pilha 'list_a' para apontar para o elemento armazenado em 'tmp'
	}
	if (flag == 1) //Se flag for 1 indica que a operação foi realizada com sucesso e então print sa
		write(1, "sa\n", 3);
}

/*int main() 
{
    t_stack *stack_a = NULL;
    int flag = 1;

    // adicionando elementos à pilha
    t_stack *elem1 = malloc(sizeof(t_stack));
    elem1->value = 3;
    elem1->next = NULL;
    t_stack *elem2 = malloc(sizeof(t_stack));
    elem2->value = 5;
    elem2->next = elem1;
    t_stack *elem3 = malloc(sizeof(t_stack));
    elem3->value = 2;
    elem3->next = elem2;
    stack_a = elem3;
    printf("Pilha antes de aplicar swap_a:\n");
    t_stack *tmp = stack_a;
    while (tmp != NULL) {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }
    swap_a(&stack_a, flag);
    printf("Pilha depois de aplicar swap_a:\n");
    tmp = stack_a;
    while (tmp != NULL) {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }
    return 0;
}*/


