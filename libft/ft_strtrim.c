/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:05:41 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/26 18:05:51 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp2(const char *s, const char *set, int idx)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s[idx] != set[i])
			return (0);
		i++;
		idx++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		slen;
	char	*str;

	i = 0;
	j = 0;
	slen = ft_strlen(set);
	str = (char *)malloc(ft_strlen(s1) + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		if (ft_strcmp2(s1, set, i) == slen)
		{
			i += slen;
			continue ;
		}
		str[j++] = s1[i];
		i++;
	}
	str[j] = 0;
	return (0);
}
