/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:26:19 by etlaw             #+#    #+#             */
/*   Updated: 2023/05/06 17:43:41 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	struct s_stack	*next;
}	t_stack;

// TESTING
void	print_stack(t_stack *stack);
// TESTING

// get_input.c
char	**get_crt_input(int ac, char **av);

// utils.c
void	errormsg(char *msg);
char	*ps_strjoin(char const *s1, char const *s2, char const *s3);
void	free_arr(char **arr);

// init.c
void	fill_stack(char **input, t_stack **stack_a);
int		count_stack(char **input);

// tiny_sort.c
void	tiny_sort(t_stack **stack);

// moves
void	do_ra(t_stack **stack_a);
void	do_rb(t_stack **stack_b);
void	do_rr(t_stack **stack_a, t_stack **stack_b);
void	do_rra(t_stack **stack_a);
void	do_rrb(t_stack **stack_b);
void	do_rrr(t_stack **stack_a, t_stack **stack_b);
void	do_pa(t_stack **stack_a, t_stack **stack_b);
void	do_pb(t_stack **stack_a, t_stack **stack_b);
void	do_sa(t_stack **stack_a);
void	do_sb(t_stack **stack_b);
void	do_ss(t_stack **stack_a, t_stack **stack_b);

// stack.c 
t_stack	*get_stack_bottom(t_stack *stack);
t_stack	*get_stack_before_bottom(t_stack *stack);
t_stack	*stack_new(int value);
void	stack_add_bottom(t_stack **stack, t_stack *new);
int		get_stack_size(t_stack *stack);

#endif