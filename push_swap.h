/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:37:33 by preina-g          #+#    #+#             */
/*   Updated: 2023/03/01 10:07:04 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "stdio.h"

//listas

typedef struct s_stack
{
	int					value;
	int					pos;
	struct s_stack	*next;
	struct s_stack	*prev;
}t_stack;

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}t_bool;

typedef struct s_data
{
	int				split_len;
	char			**split_argu;
	int				*num_list;
	t_stack			*stack_a;
	t_stack			*stack_b;
}t_data;

int		ft_is_num(char **argv);
int		ft_check_input(char **argv, int argc, t_data *data);
int		*ft_atoi_input(char **argv, int argc);
int		ft_check_dup(char **argv, int argc, t_data *data);
void	ft_split_argv(char *argv, t_data *data);
int		push_swap_main(t_data *data);
t_stack	*ft_fill_stack(t_data *data, t_stack *stack);

#endif