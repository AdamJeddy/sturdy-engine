/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:45:35 by aahsan            #+#    #+#             */
/*   Updated: 2022/07/19 12:05:57 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = -1;
	ptr = (unsigned char *)str;
	while (++i < n)
		if (ptr[i] == ch)
			return (&ptr[i]);
	return (NULL);
}
