/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:29:34 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 18:20:46 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	do_instructions(t_checker *c, char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		sa(c->a);
	if (ft_strcmp(str, "sb\n") == 0)
		sb(c->b);
	if (ft_strcmp(str, "ss\n") == 0)
		ss(c->a, c->b);
	if (ft_strcmp(str, "ra\n") == 0)
		ra(c->a);
	if (ft_strcmp(str, "rb\n") == 0)
		rb(c->b);
	if (ft_strcmp(str, "rr\n") == 0)
		rr(c->a, c->b);
	if (ft_strcmp(str, "rra\n") == 0)
		rra(c->a);
	if (ft_strcmp(str, "rrb\n") == 0)
		rrb(c->b);
	if (ft_strcmp(str, "rrr\n") == 0)
		rrr(c->a, c->b);
	if (ft_strcmp(str, "pa\n") == 0)
		pa(c->a, c->b);
	if (ft_strcmp(str, "pb\n") == 0)
		pb(c->a, c->b);
}

int	check_instructions(char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		return (0);
	if (ft_strcmp(str, "sb\n") == 0)
		return (0);
	if (ft_strcmp(str, "sb\n") == 0)
		return (0);
	if (ft_strcmp(str, "ss\n") == 0)
		return (0);
	if (ft_strcmp(str, "ra\n") == 0)
		return (0);
	if (ft_strcmp(str, "rb\n") == 0)
		return (0);
	if (ft_strcmp(str, "rr\n") == 0)
		return (0);
	if (ft_strcmp(str, "rra\n") == 0)
		return (0);
	if (ft_strcmp(str, "rrb\n") == 0)
		return (0);
	if (ft_strcmp(str, "rrr\n") == 0)
		return (0);
	if (ft_strcmp(str, "pa\n") == 0)
		return (0);
	if (ft_strcmp(str, "pb\n") == 0)
		return (0);
	return (-1);
}

void	get_nb_instructions(t_checker *c)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (check_instructions(str) == -1)
		{
			free(str);
			free(c->a);
			free(c->b);
			exit(ft_printf("Error\n"));
		}
		do_instructions(c, str);
		print_piles(c->a, c->b);
		free(str);
		str = get_next_line(0);
	}
}

void	get_instructions(t_checker *c)
{
	get_nb_instructions(c);
}
