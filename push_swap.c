/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:34 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/09 19:35:17 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *list = NULL;
    //int result;
    //int flag = 0;
   // int nbr = 3;
    
    if (ac < 2)
        ft_error("Error\n No list to sort.\n", list);
    //start_validations(list);
    create_list(&list, ac, av);
    print_list(&list);
    //result = count_stack_b(nbr, list, &flag);
    printf("%d", result);
    return (0);
}