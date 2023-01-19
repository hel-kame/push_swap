/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:43:52 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/18 05:16:20 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_nb(int *a)
{
	if (a[1] > a[2])
		sa(a);
}

void	sort_three_nb(int *a)
{
	if (a[1] > a[2] && a[2] < a[3] && a[1] < a[3])
		sa(a);
	if (a[1] > a[2] && a[2] > a[3] && a[1] > a[3])
	{
		sa(a);
		rra(a);
	}
	if (a[1] > a[2] && a[2] < a[3] && a[1] > a[3])
		ra(a);
	if (a[1] < a[2] && a[2] > a[3] && a[1] < a[3])
	{
		sa(a);
		ra(a);
	}
	if (a[1] < a[2] && a[2] > a[3] && a[1] > a[3])
		rra(a);
}

void	sort_four_nb(int *a, int *b)
{
	int	small;
	int	index;

	small = smallest_nb(a);
	index = elem_pos(small, a);
	while (a[0] != 3)
	{
		if (a[1] == small)
			pb(a, b);
		else if (index <= a[0] / 2)
			ra(a);
		else if (index > a[0] / 2)
			rra(a);
	}
	sort_three_nb(a);
	pa(a, b);
}

void	sort_five_nb(int *a, int *b)
{
	int	nb;
	int	index;

	nb = smallest_nb(a);
	index = elem_pos(nb, a);
	while (a[0] != 3)
	{
		if (a[1] == nb)
		{
			pb(a, b);
			nb = smallest_nb(a);
			index = elem_pos(nb, a);
		}
		else if (index <= a[0] / 2)
			ra(a);
		else if (index > a[0] / 2)
			rra(a);
	}
	sort_three_nb(a);
	pa(a, b);
	pa(a, b);
}
