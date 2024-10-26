/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:59:32 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/22 22:51:36 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	if ((int)n < 0)
		return (0);
	while ((size_t)i < n)
	{
		*((unsigned char *)s + i) = c;
		i++;
	}
	return (s);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char buf[21];
	char *str;
	
	ft_memset(buf, 0, sizeof(buf));
	str = (char *)ft_memset(buf, 'A', 10);
	printf("\nstr contents: %s\n", str);
	ft_memset(buf+10, 'B', 10);
	printf("buf contents: %s\n", buf);

	memset(buf, 0, sizeof(buf));
	str = (char *)memset(buf, 'A', 10);
	printf("\nstr contents: %s\n", str);
	ft_memset(buf+10, 'B', 10);
	printf("buf contents: %s\n", buf);
}
*/
