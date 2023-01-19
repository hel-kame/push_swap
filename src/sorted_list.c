/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:14:13 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/18 05:13:02 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubblesort(int *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i <= stack[0])
	{
		j = 1;
		while (j <= stack[0] - i)
		{
			if (stack[j] > stack[j + 1])
			{
				tmp = stack[j];
				stack[j] = stack[j + 1];
				stack[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*init_tmp(int *stack)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = malloc(sizeof(int) * (stack[0] + 1));
	while (i <= stack[0])
	{
		tmp[i] = stack[i];
		i++;
	}
	return (tmp);
}

int	find_position(t_push *p, int elem)
{
	int	i;

	i = 1;
	while (p->sorted[i] != elem)
		i++;
	return (i);
}

int	find_index(int *stack)
{
	int	*tmp;
	int	i;
	int	y;

	i = 1;
	y = 15;
	while (i <= stack[0])
	{
		if (stack[0] > 100 && i % 100 == 0)
			y = y + 2;
		i++;
	}
	return (y);
}
