/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:46:25 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/19 23:29:09 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_push {
	int	*a;
	int	*b;
	int	*pre_sorted;
	int	*sorted;
	int	len;
}		t_push;

int		sa(int *a);
int		pa(int *a, int *b);
void	ra(int *a);
void	rra(int *a);
int		sb(int *b);
int		pb(int *a, int *b);
void	rb(int *b);
void	rrb(int *b);
void	bubblesort(int *stack);
int		*init_tmp(int *stack);
void	init_sorted(t_push *p);
void	init_stack(t_push *p, int argc, char **argv);
int		check_string(char *str);
void	check_same_nb(t_push *p);
int		check_flow(char *str);
void	check_stack(t_push *p);
void	init_pre_sorted(t_push *p, int argc, char **argv);
void	sort_two_nb(int *a);
void	sort_three_nb(int *a);
void	sort_four_nb(int *a, int *b);
void	sort_five_nb(int *a, int *b);
int		smallest_nb(int *stack);
int		biggest_nb(int *stack);
int		find_position(t_push *p, int elem);
void	pre_sort(t_push *p, int *a, int *b);
void	get_bigger(int *a, int *b);
void	sort_algorithm(t_push *p, int *a, int *b);
void	push_swap(t_push *p, int *a, int *b);
int		elem_pos(int elem, int *stack);
int		find_index(int *stack);
void	print_piles(int *a, int *b);
#endif
