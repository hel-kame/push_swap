/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structure_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 03:20:35 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/18 22:25:22 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	init_stack(t_checker *c, int argc, char **argv)
{
	int	i;

	c->len = 1;
	if (check_flow(argc, argv) == -1)
		exit(ft_printf("Error\n"));
	while (c->len < argc)
	{
		if (check_string(argv[c->len]) == -1)
			exit(ft_printf("Error\n"));
		c->len++;
	}
	c->a = malloc(sizeof(int) * (c->len + 1));
	if (!c->a)
		exit(0);
	c->b = malloc(sizeof(int) * (c->len + 1));
	if (!c->b)
		exit(0);
	c->a[0] = c->len - 1;
	c->b[0] = 0;
	i = 1;
	while (i < argc)
	{
		c->a[i] = ft_atoi(argv[i]);
		i++;
	}
}
