/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:34 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/04 20:37:18 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *list = NULL;

    if (ac < 2)
        ft_error("Error\n No list to sort.\n", list);
    //start_validations(list);
    create_list(&list, ac, av);
    print_list(&list);
    //int number = next_biggest(list, 7);
    //ft_printf("next biggest: %d\n", number);
    return (0);
}
