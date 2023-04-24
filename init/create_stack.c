/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:26:12 by jenny             #+#    #+#             */
/*   Updated: 2023/04/24 20:37:59 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void create_list(t_stack **list, int argc, char *argv) 
{
    int i = 0;
    while (i < argc) 
    {
        i++;
        add_back(list, ft_lstnew(argv[i]));
    }
}
