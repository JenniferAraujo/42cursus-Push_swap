/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:34 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/15 17:00:40 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *list = NULL;
    t_stack *current = NULL;
   //int flag = 0;
   int count_op;

    //current = list;
    if (ac < 2)
        ft_error("Error\n No list to sort.\n", list);
    //start_validations(list);
    create_list(&list, ac, av);
    printf("criei a lista");
    count_op = count_stack(current, list, 5);
    print_list(&list);
   printf("Numero de operacoes: %d\n", count_op);
    return (0);
}
