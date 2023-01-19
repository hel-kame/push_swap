/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_nb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:40:38 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/18 05:36:04 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_nb(int *stack)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack[i];
	while (i <= stack[0])
	{
		if (stack[i] < tmp)
			tmp = stack[i];
		i++;
	}
	return (tmp);
}

int	biggest_nb(int *stack)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack[i];
	while (i <= stack[0])
	{
		if (stack[i] > tmp)
			tmp = stack[i];
		i++;
	}
	return (tmp);
}

int	elem_pos(int elem, int *stack)
{
	int	i;

	i = 1;
	while (stack[i] != elem)
		i++;
	return (i);
}
