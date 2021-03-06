/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapv5.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoykka <akoykka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:18:08 by akoykka           #+#    #+#             */
/*   Updated: 2022/06/30 13:52:05 by akoykka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include "libft/includes/libft.h"
# define ASCENDING 1
# define DESCENDING 0

typedef struct s_solve
{
	int			numbers[500];
	int			solved[500];
	int			asc[500];
	int			desc[500];

	int			current[500];

	int 		answer[500];
	size_t		answer_depth;
}			t_solve;

typedef struct s_insert
{
	int			value;

	size_t		max_depth;
	t_mnode 	*insert_point;
}			t_insert;

typedef struct s_sort
{
	char	*moves[50000];
	t_list	*stack_a;
	t_list	*stack_b;

	t_list	*unsolved;
	t_list	*under_sort;
	t_list	*solved;
	int		direction;
}				t_sort;

#endif