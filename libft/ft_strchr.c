/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:39:00 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/23 01:02:32 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (s[i] == 0)
			return (0);
		i++;
	}
	return ((char *)(s + i));
}

/*
char    *ft_strchr(const char *s, int c)
{
        int             i;

        i = 0;
        if (c <= 0)
                return ((char *)(s + i));
        while (s[i])
        {
                if (s[i] == c)
                        return ((char *)(s + i));
                i++;
        }
        return (0);
}
*/
