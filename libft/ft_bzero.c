/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:58:27 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/22 22:49:50 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	if ((int)n < 0)
		return ;
	while ((size_t)i < n)
	{	
		*((unsigned char *) s + i) = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[10] = "123456789";
	int	i;

	i = 0;
//	bzero(str, 1);	
	ft_bzero(str, 2);
	while (i < 10)
	{ 
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
*/
