/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:37:05 by preina-g          #+#    #+#             */
/*   Updated: 2023/02/09 12:37:06 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_num(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			if (ft_isdigit(argv[i][0]) == 0 && argv[i][0] == '-')
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
				return (FALSE);
		}
	}
	return (TRUE);
}

int	*ft_atoi_input(char **argv, int argc)
{
	int	*array;
	int	i;
	int	j;

	array = (int *)malloc((argc - 1) * sizeof(int));
	i = 0;
	j = 0;
	while (argv[++i])
	{
		array[j] = ft_atoi(argv[i]);
		j++;
	}
	return (array);
}

int	ft_check_dup(char **argv, int argc)
{
	int	*numlist;
	int	i;
	int	j;

	numlist = ft_atoi_input(argv, argc);
	i = -1;
	while (numlist[++i])
	{
		j = -1;
		while (numlist[++j])
		{
			if (numlist[j] == numlist[i])
				return (FALSE);
		}
	}
	return (TRUE);
}
