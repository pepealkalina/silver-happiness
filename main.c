/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:31:17 by preina-g          #+#    #+#             */
/*   Updated: 2023/02/09 12:34:07 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int *m;
	int i = -1;
	if (argc < 2)
		write(1, "Error! No input\n", 16);
	else if (ft_check_input(argv, argc) == FALSE)
		return (-1);
	m = ft_atoi_input(argv, argc);
	while (m[++i])
		printf("%i ", m[i]);
	return (0);
}
