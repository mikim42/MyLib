/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mingyun Kim <mikim@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 13:54:43 by Mingyun K         #+#    #+#             */
/*   Updated: 2018/02/03 14:29:29 by Mingyun K        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_vec_destroy(t_vec **vec)
{
	free((*vec)->content);
	free(*vec);
	*vec = NULL;
}

t_vec	*ft_vec_create(size_t content_size)
{
	t_vec	*vec;

	if (!content_size || !(vec = ft_memalloc(sizeof(t_vec))))
		return (NULL);
	vec->content_size = content_size;
	return (vec);
}

