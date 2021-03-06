/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoykka <akoykka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:17:24 by akoykka           #+#    #+#             */
/*   Updated: 2022/07/30 14:42:36 by akoykka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void compare_results(t_optim *optimum, int target_value)
{
	int forward_value;
	int backward_value;
	int best_value;

	forward_value = get_bigger(optimum->forward_a, optimum->forward_b);
	backward_value = get_bigger(optimum->backward_a, optimum->backward_b);
	best_value = get_bigger(optimum->best_a, optimum->best_b);
	if (forward_value < backward_value
		&& forward_value < best_value)
	{
		optimum->best_a = optimum->forward_a;
		optimum->best_b = optimum->forward_b;
		optimum->best_target = target_value;
		optimum->direction = FORWARD;
		return;
	}
	if (backward_value < best_value)
	{
		optimum->best_a = optimum->backward_a;
		optimum->best_b = optimum->backward_b;
		optimum->best_target = target_value;
		optimum->direction = BACKWARD;
	}
}
