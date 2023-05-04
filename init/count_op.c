/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:50 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/04 19:07:04 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//conta o numero de operacoes para ordenar a lista
int	count_op(t_stack *num, int size, int *flag)
{
	int	number_elements;
	int	half_len;

	number_elements = num->value;
	half_len = size / 2;
	if (number_elements <= half_len)
	{
		*flag = 0;
		return (number_elements);
	}
	else
	{
		*flag = 1;
		return (size - number_elements - 1);
	}
}

