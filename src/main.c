/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:50:52 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 23:28:01 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push	p;

	if (argc == 1)
		exit(ft_printf("Usage: ./push_swap [NB]\n"));
	init_stack(&p, argc, argv);
	init_pre_sorted(&p, argc, argv);
	init_sorted(&p);
	print_piles(p.a, p.b);
	push_swap(&p, p.a, p.b);
	free(p.a);
	free(p.b);
	free(p.pre_sorted);
	free(p.sorted);
	return (0);
}
