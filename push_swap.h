/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:37:33 by preina-g          #+#    #+#             */
/*   Updated: 2023/02/09 12:33:57 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}t_bool;

int	ft_is_num(char **argv);
int	ft_check_input(char **argv, int argc);
int	*ft_atoi_input(char **argv, int argc);
int	ft_check_dup(char **argv, int argc);

#endif