/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:49 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/24 18:45:49 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*createList() 
{
	int	num;
	
     t_stack *new_node = ft_lstnew(num);
      


}





void printList(t_stack *node) {
    while (node != NULL) {
        printf("%d ", node->value);
        node = node->next;
    }
}

int main() {
    t_stack *head = createList();

    printf("A lista encadeada criada a partir da sequência é:\n");
    printList(head);

    return 0;
}
