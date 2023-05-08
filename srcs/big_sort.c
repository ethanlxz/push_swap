/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:23:49 by etlaw             #+#    #+#             */
/*   Updated: 2023/05/02 16:39:47 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	push_all_save_three(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	pushed;
	int	i;

	pushed = 0;
	i = 0;
	while (size > 6 && i < size && pushed < size / 2)
	{
		if ((*stack_a)->index <= size / 2)
		{
			do_pb(stack_a, stack_b);
			pushed++;
		}
		else
			do_sa(stack_a);
		i++;
	}
	while (size - pushed > 3)
	{
		do_pb(stack_a, stack_b)
		pushed++;
	}
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	push_all_save_three(stack_a, stack_b, stack_size);
	tiny_sort(stack_a);
	
}
