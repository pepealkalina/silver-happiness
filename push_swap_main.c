/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:03:01 by preina-g          #+#    #+#             */
/*   Updated: 2023/03/08 11:20:49 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap_main(t_data *data)
{
	t_stack	*stack_a;

	stack_a = NULL;
	stack_a = ft_fill_stack(data, stack_a);
	ft_set_index(stack_a);
	while (stack_a)
	{
		printf("final %i -> %i\n",stack_a->value, stack_a->index);
		stack_a = stack_a->next;
	}
	return (0);
}
