/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:45 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/13 17:49:46 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Faz o rotate_a e rotate_b ao mesmo tempo
void	ra_rb(t_stack **list_a, t_stack **list_b)
{
	rotate_a(list_a, 0);
	rotate_b(list_b, 0);
	write(1, "rr\n", 3);
}