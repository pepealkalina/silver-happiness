/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:03:01 by preina-g          #+#    #+#             */
/*   Updated: 2023/03/13 13:17:33 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list_s(t_stack	*stack_a)
{
	while (stack_a)
	{
		printf("init a value %i -> index %i -> pos %i\n", stack_a->value, stack_a->index, stack_a->pos);
		stack_a = stack_a->next;
	}
}

void	print_list_f(t_stack	*stack_a)
{
	while (stack_a)
	{
		printf("final a value %i -> index %i -> pos %i\n", stack_a->value, stack_a->index, stack_a->pos);
		stack_a = stack_a->next;
	}
}

int	push_swap_main(t_data *data)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = ft_fill_stack(data, stack_a);
	ft_set_index(stack_a);
	//print_list_s(stack_a);
	ft_sort_three(&stack_a);
	//print_list_f(stack_a);
	return (0);
}
