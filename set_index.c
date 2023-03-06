/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:13:30 by preina-g          #+#    #+#             */
/*   Updated: 2023/03/06 13:13:24 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_set_index_init(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack != NULL)
	{
		stack->index = -1;
		len++;
		stack = stack->next;
	}
	return (len);
}

int	ft_set_min(t_stack *stack)
{
	int	min;

	min = stack->value;
	while (stack != NULL)
	{
		if (min > stack->value && stack->index == -1)
		{
			printf("index -> %i\n", stack->index);
			min = stack->value;
		}
		stack = stack->next;
	}
	printf("min -> %i\n", min);
	return (min);
}

int	ft_set_max(t_stack *stack)
{
	int	max;

	max = stack->value;
	while (stack != NULL)
	{
		if (max < stack->value && stack->index == -1)
			max = stack->value;
		stack = stack->next;
	}
	printf("max -> %i\n", max);
	return (max);
}

void	ft_set_min_index(t_stack *stack, int min, int index)
{
	while (stack != NULL)
	{
		if (stack->value == min && stack->index == -1)
		{
			stack->index = index;
		}
		stack = stack->next;
	}
}

void	ft_set_index(t_stack *stack)
{
	int	index;
	int	len;

	index = 0;
	len = ft_set_index_init(stack);
	while (index < len)
	{
		ft_set_min_index(stack, ft_set_min(stack), 3);
		index++;
	}
	ft_set_min_index(stack, ft_set_max(stack), index);
}
