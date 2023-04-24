/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:03:33 by jenny             #+#    #+#             */
/*   Updated: 2023/04/24 20:38:56 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void algoritm(t_stack **list_a)
{
    t_stack *list_b = NULL; // Pilha auxiliar

    int size = stack_size(*list_a); // Tamanho da lista

    while (size > 0)
    {
        int max_index = 0;
        int max_value = (*list_a)->value;

        // Encontra o maior elemento na pilha A
        t_stack *tmp = *list_a;
        int i = 0;
        while (i < size)
        {
            i++;
            if (tmp->value > max_value)
            {
                max_value = tmp->value;
                max_index = i;
            }
            tmp = tmp->next;
        }
        // Move o maior elemento para o topo da pilha A
        if (max_index == 0)
            rotate_a(list_a, 1);
        else if (max_index == 1)
            sa_sb(list_a, &list_b);
        else if (max_index == 2)
        {
            reverse_rotate_a(list_a, 1);
            sa_sb(list_a, &list_b);
        }
        else if (max_index == size - 1)
            reverse_rotate_a(list_a, 1);
        else
        {
            int index = find_index(*list_a, max_value);
            if (index < size / 2)
                while (index--)
                    rotate_a(list_a, 1);
            else
                while (++index < size)
                    reverse_rotate_a(list_a, 1);
            sa_sb(list_a, &list_b);
        }
        size--;
    }
    // Move os elementos da pilha B para a pilha A
    while (list_b)
        push_a(list_a, &list_b);
}

int main(int argc, char **argv)
{
    t_stack *list = NULL;

    if (argc < 2) 
    {
        printf("Erro: precisa informar pelo menos um valor para ordenar.\n");
        exit(0);
    }
    
    create_list(&list, argc, argv);
    
    // Ordenar lista encadeada usando a função de ordenação
    algoritm(&list);

    // Imprimir lista ordenada
    printf("Valores ordenados:");
    while (list != NULL) {
        printf(" %d", list->value);
        list = list->next;
    }
    printf("\n");
    return 0;
}
