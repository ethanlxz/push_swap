/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:22:09 by etlaw             #+#    #+#             */
/*   Updated: 2023/05/06 16:42:06 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	get_position(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		i++;
		tmp = tmp->next;
	}
}

void	get_pivot_position(t_stack **a, t_stack *b)
{
	t_stack	*tmp_b;
	int		target_pos;

	tmp_b = *b;
}
