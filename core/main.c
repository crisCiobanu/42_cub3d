/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <cciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:02:41 by cciobanu          #+#    #+#             */
/*   Updated: 2022/06/24 16:59:42 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

int	main(int argc, char **argv)
{
	t_cub	*cub;

	if (argc != 2)
		ft_error(1);
	cub = cb_initcube();
	if (!cub)
		ft_error(3);
	cb_parsemap(argv[1], cub, -1, NULL);
	cb_initminimap(cub);
	cb_mlx_launch(cub);
	return (0);
}
