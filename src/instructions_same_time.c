/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_same_time.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:34:24 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 18:21:41 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(int *a, int *b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}

void	rr(int *a, int *b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}

void	rrr(int *a, int *b)
{
	rra(a);
	rrb(b);
	ft_printf("rrr\n");
}
