/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:46:49 by ahallain          #+#    #+#             */
/*   Updated: 2020/10/14 21:34:26 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_full.h"

int		init_file(char *path, t_file *file)
{
	*file = (t_file){{0, 0}, {0, 0, {0, 0}}, {0, 0, {0, 0}}, {0, 0, {0, 0}},
		{0, 0, {0, 0}}, 0, {0, 0, {0, 0}}, {0, 0, {0, 0}}, 0};
	scan_file(path, file);
	return (file->map ? !verification(file->map) : 1);
}
