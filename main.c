/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:31:17 by preina-g          #+#    #+#             */
/*   Updated: 2023/03/01 17:54:03 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		exit(write(1, "Error! No input\n", 16));
	else if (ft_check_input(argv, argc, &data) == FALSE)
		return (-1);
	else
	{
		if (data.num_list == NULL)
			return (-1);
		push_swap_main(&data);
	}
	return (0);
}
