/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:37:03 by preina-g          #+#    #+#             */
/*   Updated: 2023/02/09 13:09:16 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_input(char **argv, int argc)
{
	if (ft_is_num(argv) == FALSE)
	{
		write(1, "Error!", 6);
		return (FALSE);
	}
	else
	{
		if (ft_check_dup(argv, argc) == FALSE)
		{
			write(1, "Error! ave", 6);
			return (FALSE);
		}
	}
	return (TRUE);
}
