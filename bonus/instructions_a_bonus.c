/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:13:46 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 17:23:03 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	sa(int *a)
{
	int	tmp;

	if (a[0] <= 1)
		return (1);
	tmp = a[1];
	a[1] = a[2];
	a[2] = tmp;
	return (0);
}

int	pa(int *a, int *b)
{
	int	i;

	if (b[0] == 0)
		return (1);
	a[0] = a[0] + 1;
	i = a[0];
	while (i > 1)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[1] = b[1];
	i = 1;
	while (i <= b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	b[0] = b[0] - 1;
	return (0);
}

void	ra(int *a)
{
	int	len;
	int	tmp;
	int	i;

	len = a[0];
	tmp = a[1];
	i = 1;
	while (i <= len - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[len] = tmp;
}

void	rra(int *a)
{
	int	tmp;
	int	i;
	int	len;

	len = a[0];
	tmp = a[len];
	i = len;
	while (i > 1)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[1] = tmp;
}
