/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:24:12 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/22 22:52:02 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		if (str1[i] == 0 && str2[i] == 0)
			break ;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <string.h>

int	main(void)
{
	const char	*s1 = "atoms\0\0\0\0";
	const char	*s2 = "atoms\0abc";

	printf("ft_strncmp return = %d\n", ft_strncmp(s1, s2, 8));
	printf("strncmp return = %d\n", strncmp(s1, s2, 8));
	return (0);
}
*/
