/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:27:14 by preina-g          #+#    #+#             */
/*   Updated: 2023/02/22 12:35:27 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(t_stack *stack)
{
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	return (stack);
}

void	add_int(t_stack *stack, int value, int pos)
{
	t_stack	*current;

	current = stack;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node(current->next);
	current->next->value = value;
	current->next->pos = pos;
	current->next->next = NULL;
}

t_stack	*ft_fill_stack(t_data *data, t_stack *stack)
{
	int	i;
	int	j;

	stack = new_node(stack);
	if (stack == NULL)
		return (NULL);
	i = 0;
	while (data->num_list[i])
		i++;
	i--;
	stack->value = data->num_list[i];
	stack->pos = 0;
	i--;
	j = 1;
	while (i >= 0)
	{
		add_int(stack, data->num_list[i], j);
		j++;
		i--;
	}
	return (stack);
}
