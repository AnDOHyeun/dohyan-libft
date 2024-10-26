/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:09:35 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/22 22:52:05 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == (unsigned char)c)
			break ;
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
 
#define SIZE 40
 
int main(void)
{
 	char	buf[SIZE] = "aa computer program asdw aawww";
 	char	* ptr;
 	int		ch = 's';
 
 	ptr = strrchr( buf, ch );
 	printf( "strrchr %c in '%s' is '%s'\n", ch, buf, ptr );
 	
	ptr = ft_strrchr( buf, ch );
 	printf( "ft_strrchr %c in '%s' is '%s'\n", ch, buf, ptr );

	return (0);
}
*/
