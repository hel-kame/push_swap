/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:37:45 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 23:25:42 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_string(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (-1);
	if (str[i] == '+' && str[i] != '-')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return (0);
	else
		return (-1);
}

int	check_flow(char *str)
{
	if (ft_atol(str) > INT_MAX || ft_atol(str) < INT_MIN)
		return (-1);
	return (0);
}

void	check_same_nb(t_push *p)
{
	int	i;
	int	y;
	int	tmp;

	i = 1;
	while (i != p->a[0])
	{
		tmp = p->a[i];
		y = i + 1;
		while (y <= p->a[0])
		{
			if (tmp == p->a[y])
			{
				free(p->a);
				free(p->b);
				exit(ft_printf("Error\n"));
			}
			y++;
		}
		i++;
	}
}

void	check_stack(t_push *p)
{
	check_same_nb(p);
}
