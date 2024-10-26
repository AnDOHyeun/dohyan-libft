/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 06:55:15 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/25 06:55:16 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s2);
	if (s_len == 0)
		return ((char *)(s1 + i));
	while (i < n && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			j++;
			if ((i + j) > n)
				return (0);
			if (j == s_len)
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (0);
}
