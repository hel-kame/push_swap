/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 03:20:35 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/20 00:12:44 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_len(t_push *p, int argc, char **argv)
{
	int i;
	int y;
	char **tmp;

	i = 1;
	p->len = 1;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		y = 0;
		while (tmp[y])
		{
			if (check_string(tmp[y]) == -1 || check_flow(tmp[y]) == -1)
			{
				free(tmp);
				exit(ft_printf("Error\n"));
			}
			y++;
			p->len++;
		}
		free(tmp);
		i++;
	}
}

void	split_nb(int *stack, int argc, char **argv)
{
	int	i;
	int	y;
	int	x;
	char **tmp;

	i = 1;
	y = 1;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		x = 0;
		while (tmp[x])
		{
			stack[y] = ft_atoi(tmp[x]);
			y++;
			x++;
		}
		free(tmp);
		i++;
	}
}

void	init_stack(t_push *p, int argc, char **argv)
{
	get_len(p, argc, argv);
	p->a = malloc(sizeof(int) * (p->len + 1));
	if (!p->a)
		exit(0);
	p->b = malloc(sizeof(int) * (p->len + 1));
	if (!p->b)
		exit(0);
	p->a[0] = p->len - 1;
	p->b[0] = 0;
	split_nb(p->a, argc, argv);
}

void	init_pre_sorted(t_push *p, int argc, char **argv)
{
	p->pre_sorted = malloc(sizeof(int) * (p->len + 1));
	if (!p->pre_sorted)
		exit(0);
	p->pre_sorted[0] = p->len - 1;
	split_nb(p->pre_sorted, argc, argv);
}

void	init_sorted(t_push *p)
{
	p->sorted = init_tmp(p->pre_sorted);
	bubblesort(p->sorted);
}
