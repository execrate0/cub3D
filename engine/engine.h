/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 05:57:44 by ahallain          #+#    #+#             */
/*   Updated: 2020/06/19 15:50:54 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_H
# define ENGINE_H

# ifndef FOV
#  define FOV 70
# endif

# include "../runtime/runtime.h"

typedef struct	s_caster
{
	t_position	direction;
	t_position	delta;
	t_position	side;
	t_position	step;
}				t_caster;

t_ray			ft_init_ray(float degree);
t_calc			ft_distance(t_ray ray, float camerax, t_position position,
	char **map);

#endif