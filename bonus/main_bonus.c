/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:14:35 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 18:20:38 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_checker	c;

	if (argc == 1)
		exit(ft_printf("Usage: ./checker [NB]\n"));
	init_stack(&c, argc, argv);
	check_stack(&c);
	get_instructions(&c);
	check_sorted(&c);
	free(c.a);
	free(c.b);
	return (0);
}
