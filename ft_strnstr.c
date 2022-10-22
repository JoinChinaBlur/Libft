/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selveren <selveren@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:29:46 by selveren          #+#    #+#             */
/*   Updated: 2022/10/07 13:34:29 by selveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	if (little[0] == '\0' || big == little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		i2 = 0;
		while (big [i + i2] != '\0' && little[i2] != '\0'
			&& big[i + i2] == little[i2] && i + i2 < len)
				i2++;
		if (i2 == l_len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
