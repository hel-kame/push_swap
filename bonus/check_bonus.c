/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:37:45 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 18:21:12 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_string(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (-1);
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]) && str[i] != ' ' && str[i] != '-')
			return (-1);
		if (ft_isdigit(str[i - 1]) && str[i] == '-' && ft_isdigit(str[i + 1]))
			return (-1);
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count > 1)
		return (-1);
	return (0);
}

int	check_flow(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			return (-1);
		i++;
	}
	return (0);
}

void	check_same_nb(t_checker *c)
{
	int	i;
	int	y;
	int	tmp;

	i = 1;
	while (i != c->a[0])
	{
		tmp = c->a[i];
		y = i + 1;
		while (y <= c->a[0])
		{
			if (tmp == c->a[y])
			{
				free(c->a);
				free(c->b);
				exit(ft_printf("Error\n"));
			}
			y++;
		}
		i++;
	}
}

void	check_sorted(t_checker *c)
{
	int	i;

	if (c->b[0] > 0)
	{
		free(c->a);
		free(c->b);
		exit(ft_printf("KO\n"));
	}
	i = 1;
	while (i < c->a[0])
	{
		if (c->a[i] > c->a[i + 1])
		{
			free(c->a);
			free(c->b);
			exit(ft_printf("KO\n"));
		}
		i++;
	}
	ft_printf("OK\n");
}

void	check_stack(t_checker *c)
{
	check_same_nb(c);
}
