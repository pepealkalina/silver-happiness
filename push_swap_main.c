/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:03:01 by preina-g          #+#    #+#             */
/*   Updated: 2023/02/22 12:13:38 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap_main(t_data *data)
{
	t_stack	*stack_a;

	stack_a = ft_fill_stack(data, stack_a);
	while (stack_a)
	{
		printf("%i\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}
