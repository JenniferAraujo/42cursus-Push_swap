/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:58 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/13 17:50:00 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Faz o swap_a e swap_b ao mesmo tempo
void	sa_sb(t_stack **list_a, t_stack **list_b)
{
	swap_a(list_a, 0);
	swap_b(list_b, 0);
	write(1, "ss\n", 3);
}