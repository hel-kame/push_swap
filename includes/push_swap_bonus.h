/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:46:25 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 17:56:32 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_checker {
	int		*a;
	int		*b;
	int		len;
}		t_checker;

int		sa(int *a);
int		pa(int *a, int *b);
void	ra(int *a);
void	rra(int *a);
int		sb(int *b);
int		pb(int *a, int *b);
void	rb(int *b);
void	rrb(int *b);
void	ss(int *a, int *b);
void	rr(int *a, int *b);
void	rrr(int *a, int *b);
void	init_stack(t_checker *c, int argc, char **argv);
int		check_string(char *str);
void	check_same_nb(t_checker *c);
int		check_flow(int argc, char **argv);
void	check_stack(t_checker *c);
void	get_instructions(t_checker *c);
void	check_sorted(t_checker *c);
void	print_piles(int *a, int *b); //DELETE
#endif
