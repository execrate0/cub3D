/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:46:49 by ahallain          #+#    #+#             */
/*   Updated: 2020/10/17 19:21:56 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_full.h"

int		init_file(char *path, t_file *file)
{
	*file = (t_file){{0, 0}, {0, 0, {0, 0}}, {0, 0, {0, 0}}, {0, 0, {0, 0}},
		{0, 0, {0, 0}}, 0, {0, 0, {0, 0}}, {0, 0, {0, 0}}, 0};
	if (scan_file(path, file))
		return (3);
	return (file->map ? !verification(file->map) : 2);
}