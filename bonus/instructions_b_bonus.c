/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:13:46 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 17:23:23 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	sb(int *b)
{
	int	tmp;

	if (b[0] <= 1)
		return (1);
	tmp = b[1];
	b[1] = b[2];
	b[2] = tmp;
	return (0);
}

int	pb(int *a, int *b)
{
	int	i;

	if (a[0] == 0)
		return (1);
	b[0] = b[0] + 1;
	i = b[0];
	while (i > 1)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[1] = a[1];
	i = 1;
	while (i <= a[0])
	{
		a[i] = a[i + 1];
		i++;
	}
	a[0] = a[0] - 1;
	return (0);
}

void	rb(int *b)
{
	int	tmp;
	int	i;
	int	len;

	len = b[0];
	tmp = b[1];
	i = 1;
	while (i <= len - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[len] = tmp;
}

void	rrb(int *b)
{
	int	tmp;
	int	i;

	tmp = b[b[0]];
	i = b[0];
	while (i > 1)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[1] = tmp;
}
