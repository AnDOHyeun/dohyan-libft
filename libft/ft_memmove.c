/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:13:10 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/22 22:55:34 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		return (0);
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *) src + i);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[21] = "a shiny white sphere";
	char	*p = str + 8;
	char	*src = str + 2;

	printf("Before \"%s\"\n", str);
	ft_memmove(p, src, 5);
	printf("After \"%s\"\n", str);

	return (0);	
}
*/
