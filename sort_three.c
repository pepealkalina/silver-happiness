/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:33:50 by preina-g          #+#    #+#             */
/*   Updated: 2023/03/13 13:16:35 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_two_acts(t_stack **stack)
{
	if ((*stack)->index == 2 && (*stack)->next->index == 1)
	{
		rotate(stack);
		write(1, "ra\n", 3);
		swap((*stack));
		write(1, "sa\n", 3);
	}
	else if ((*stack)->index == 0 && (*stack)->next->index == 2)
	{
		reverse_rotate(stack);
		write(1, "rra\n", 4);
		swap((*stack));
		write(1, "sa\n", 3);
	}
	else
		return ;
}

void	ft_one_act(t_stack **stack)
{
	if ((*stack)->index == 1 && (*stack)->next->index == 0)
	{
		swap((*stack));
		write(1, "sa\n", 3);
	}
	else if ((*stack)->index == 1 && (*stack)->next->index == 2)
	{
		reverse_rotate(stack);
		write(1, "rra\n", 4);
	}
	else if ((*stack)->index == 2 && (*stack)->next->index == 0)
	{
		rotate(stack);
		write(1, "ra\n", 3);
	}
	else
		return ;
}

void	ft_sort_three(t_stack **stack)
{
	if (!stack)
		exit(EXIT_FAILURE);
	ft_two_acts(stack);
	ft_one_act(stack);
	ft_reset_pos((*stack));
}
