/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 02:38:58 by ahallain          #+#    #+#             */
/*   Updated: 2020/10/06 21:49:16 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../mlx1.h"

void	w(t_runtime *runtime)
{
	t_position	next;

	next = (t_position) {runtime->player.position.x + 2 * sin(runtime->player.degree * M_PI / 180) / MAX_FPS, runtime->player.position.y - 2 * cos(runtime->player.degree * M_PI / 180) / MAX_FPS};
	if (runtime->file.map[(unsigned short)next.y][(unsigned short)runtime->player.position.x] != '1')
		runtime->player.position.y = next.y;
	if (runtime->file.map[(unsigned short)runtime->player.position.y][(unsigned short)next.x] != '1')
		runtime->player.position.x = next.x;
}