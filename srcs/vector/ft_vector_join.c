/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:55:07 by ibertran          #+#    #+#             */
/*   Updated: 2024/04/19 22:09:47 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include "ft_mem.h"

int	ft_vector_join(t_vector *v, void *items, size_t n)
{
	if (!v)
		return (FAILURE);
	while (v->total + n > v->capacity)
	{
		if (ft_vector_resize(v, v->capacity << 1))
			return (FAILURE);
	}
	ft_memcpy(v->ptr + v->size * v->total, items, v->size * n);
	v->total += n;
	return (SUCCESS);
}
