/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:34 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/17 18:44:54 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *list = NULL;
    t_stack *list_b = NULL;
    t_stack *moves; 
    
    moves = saving_moves(list, list_b);

    if (ac < 2)
        ft_error("Error\n No list to sort.\n", list);
    //start_validations(list);
    create_list(&list, ac, av);
    
    print_list(&list);
       
    if (moves != NULL)
        printf("Elemento mais barato: %d\n", moves->value);

    return (0);
}
