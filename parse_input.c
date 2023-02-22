/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:37:03 by preina-g          #+#    #+#             */
/*   Updated: 2023/02/22 16:08:53 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_input(char **argv, int argc, t_data *data)
{
	if (argc == 2)
	{
		ft_split_argv(argv[1], data);
		if (ft_check_input(data->split_argu, data->split_len, data) == FALSE)
			return (FALSE);
	}
	else
	{
		if (ft_is_num(argv) == FALSE)
		{
			write(1, "Error! sda", 10);
			return (FALSE);
		}
		else if (ft_check_dup(argv, argc) == FALSE)
		{
			write(1, "Error! ave", 10);
			return (FALSE);
		}
	}
	data->num_list = ft_atoi_input(argv, argc);
	return (TRUE);
}
