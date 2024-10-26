/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:32:33 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/23 00:38:45 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{	
	char *src = "123456";
	char dest[20];
	size_t ret = ft_strlcpy(dest, src, 13);
                                                                            
        printf( "dest = %s\nreturn = %zu", dest, ret);
}
*/
