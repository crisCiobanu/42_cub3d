/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <cciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:40:12 by cciobanu          #+#    #+#             */
/*   Updated: 2022/06/24 16:59:56 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

float	cb_abs(float nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

double	cb_dabs(double nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	ft_max1(int first, int second)
{
	if (first > second)
		return (first);
	return (second);
}

int	ft_mod1(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}
