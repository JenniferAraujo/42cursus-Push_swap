#include "push_swap.h"

void	rotate_a(t_stack **list_a, int flag)
{
	t_stack	*tmp;

	if ((*list_a)->next == NULL) //verique se a lista tem apenas um elemento ou está vazia
		return ;
	tmp = (*list_a)->next; //atribui o segundo elemento da lista para tmp
	(*list_a)->next = NULL; //define o próximo elemento do primeiro nó como NULL
	 ft_lstaddback(&tmp, *list_a); //o primeiro nó é adicionado ao final da lista
	*list_a = tmp; //o ponteiro da lista é atualizado para apontar para o novo primeiro nó (o segundo nó original)
	if (flag == 1) //se flag for 1 indica que a operação foi realizada com sucesso e então print ra
		write(1, "ra\n", 3);
}

/*int main(void)
{
	t_stack *list_a = NULL; // Inicializa a lista como vazia
	int i;

	// Adiciona alguns elementos na lista
	for (i = 5; i >= 1; i--)
	{
		t_stack *new_node = (t_stack *)malloc(sizeof(t_stack)); // Aloca memória para um novo nó
		new_node->value = i; // Define o valor do novo nó como i
		new_node->next = list_a; // O próximo ponteiro do novo nó aponta para o primeiro nó da lista
		list_a = new_node; // Atualiza o ponteiro da lista para apontar para o novo nó
	}

	// Imprime a lista antes de rotacionar
	printf("Lista antes de rotacionar: ");
	t_stack *current = list_a; // Cria um ponteiro para o nó atual e o atribui ao primeiro nó da lista
	while (current != NULL) // Percorre a lista enquanto o ponteiro atual não for NULL
	{
		printf("%d ", current->value); // Imprime o valor do nó atual
		current = current->next; // Atualiza o ponteiro atual para apontar para o próximo nó da lista
	}
	printf("\n"); // Imprime uma quebra de linha para melhorar a apresentação

	// Rotaciona a lista
	if (list_a != NULL && list_a->next != NULL) // Verifica se a lista tem pelo menos dois elementos
	{
		t_stack *tmp = list_a->next; // Cria um ponteiro temporário e o atribui ao segundo nó da lista
		list_a->next = NULL; // O próximo ponteiro do primeiro nó é definido como NULL
		current = tmp; // O ponteiro atual é atualizado para apontar para o segundo nó da lista
		while (current->next != NULL) // Percorre a lista até encontrar o último nó (cujo próximo ponteiro é NULL)
			current = current->next;
		current->next = list_a; // O primeiro nó é adicionado ao final da lista
		list_a = tmp; // O ponteiro da lista é atualizado para apontar para o novo primeiro nó (o segundo nó original)
	}

	// Imprime a lista após rotacionar
	printf("Lista após rotacionar: ");
	current = list_a; // Atualiza o ponteiro atual para apontar para o primeiro nó da lista (agora rotacionada)
	while (current != NULL) // Percorre a lista enquanto o ponteiro atual não for NULL
	{
		printf("%d ", current->value); // Imprime o valor do nó atual
		current = current->next; // Atualiza o ponteiro atual para apontar para o próximo nó da lista
	}
	printf("\n"); // Imprime uma quebra de linha para melhorar a apresentação

	// Libera a memória alocada para a lista
	current = list_a; // Atualiza o ponteiro atual para apontar para o primeiro nó da lista
}*/