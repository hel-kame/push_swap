/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:17:32 by hel-kame          #+#    #+#             */
/*   Updated: 2023/01/18 04:55:16 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_atol(const char *nptr)
{
	long int	i;
	long int	val;
	long int	neg;

	i = 0;
	val = 0;
	neg = 0;
	if (nptr == NULL)
		return (-1);
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		neg = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while ((nptr[i] != '\0') && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		val *= 10;
		val += nptr[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-val);
	else
		return (val);
}
