/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_vectors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:14:27 by poriou            #+#    #+#             */
/*   Updated: 2024/03/31 20:37:00 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	upd_vectors(t_map *map)
{
	map->plane->vect_x->x_in_plane = map->plane->vect_x->scale;
	map->plane->vect_x->x_in_plane *= sin(map->plane->rotate_z * M_PI / 180);
	map->plane->vect_y->x_in_plane = map->plane->vect_y->scale;
	map->plane->vect_y->x_in_plane *= cos(map->plane->rotate_z * M_PI / 180);
	map->plane->vect_z->x_in_plane = 0;
	map->plane->vect_x->y_in_plane = map->plane->vect_x->scale;
	map->plane->vect_x->y_in_plane *= cos(map->plane->rotate_z * M_PI / 180);
	map->plane->vect_x->y_in_plane *= sin(map->plane->rotate_y * M_PI / 180);
	map->plane->vect_y->y_in_plane = map->plane->vect_y->scale;
	map->plane->vect_y->y_in_plane *= sin(map->plane->rotate_z * M_PI / 180);
	map->plane->vect_y->y_in_plane *= sin(map->plane->rotate_y * M_PI / 180);
	map->plane->vect_y->y_in_plane *= (-1);
	map->plane->vect_z->y_in_plane = map->plane->vect_z->scale;
	map->plane->vect_z->y_in_plane *= cos(map->plane->rotate_y * M_PI / 180);
}
