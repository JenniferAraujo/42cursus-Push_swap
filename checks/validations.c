/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:02:43 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/04 15:23:35 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	start_validations(t_stack *list)
{
	int	fd;
	
	fd = 0;
	ft_printf("Init validations...\n");
	is_int(fd, list);
	check_number(list);
	double_number(list);
	is_ordered(list);
}