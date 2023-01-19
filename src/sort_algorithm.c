/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:57:34 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/18 00:18:12 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort(t_push *p, int *a, int *b)
{
	int	count;
	int	index;

	index = find_index(a);
	count = 0;
	while (a[0] != 0)
	{
		if (find_position(p, a[1]) <= count && count > 1)
		{
			pb(a, b);
			rb(b);
			count++;
		}
		else if (find_position(p, a[1]) <= (count + index))
		{
			pb(a, b);
			count++;
		}
		else
			ra(a);
	}
}

void	get_bigger(int *a, int *b)
{
	int	big;
	int	index;

	big = biggest_nb(b);
	index = elem_pos(big, b);
	while (b[0] != 0)
	{
		if (b[1] == big)
			pa(a, b);
		if (b[0] != 0)
		{
			big = biggest_nb(b);
			index = elem_pos(big, b);
		}
		else
			break ;
		while (b[1] != big)
		{
			if (index < (b[0] / 2))
				rb(b);
			else if (index >= (b[0] / 2))
				rrb(b);
		}
	}
}

void	sort_algorithm(t_push *p, int *a, int *b)
{
	pre_sort(p, a, b);
	get_bigger(a, b);
}

void	push_swap(t_push *p, int *a, int *b)
{
	if (a[0] == 2)
		sort_two_nb(a);
	if (a[0] == 3)
		sort_three_nb(a);
	if (a[0] == 4)
		sort_four_nb(a, b);
	if (a[0] == 5)
		sort_five_nb(a, b);
	if (a[0] > 5)
		sort_algorithm(p, a, b);
}
