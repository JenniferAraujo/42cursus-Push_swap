/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:01:45 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/26 17:21:03 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *c, t_stack *stack)
{
	ft_printf("Error\nSomething is wrong!\n%s\n", c);
	free_stack(&stack);
	exit(0);
}
