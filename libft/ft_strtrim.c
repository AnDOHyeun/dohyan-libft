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

static int	start_ch(const char *s1, const char *set, size_t set_len)
{
	size_t	i;
	size_t	j;
	size_t	flag;

	i = 0;
	flag = 0;
	while (s1[i])
	{
		j = 0;
		while (j < set_len)
		{
			if (s1[i] == set[j])
				break ;
			j++;
			if (j == set_len)
				flag = 1;
		}
		if (flag == 1)
			return ((int)i);
		i++;
	}
	return ((int)i);
}

static int	end_ch(const char *s1, const char *set, size_t set_len)
{
	size_t	i;
	size_t	j;
	size_t	flag;

	i = ft_strlen(s1) - 1;
	flag = 0;
	while (i != 0)
	{
		j = 0;
		while (j < set_len)
		{
			if (s1[i] == set[j])
				break ;
			j++;
			if (j == set_len)
				flag = 1;
		}
		if (flag == 1)
			return ((int)i);
		i--;
	}
	return ((int)i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		end;
	int		start;
	size_t	set_len;

	set_len = ft_strlen(set);
	if (!s1)
		return (ft_strdup(s1));
	if (!set_len)
		return (ft_strdup(s1));
	start = start_ch(s1, set, set_len);
	end = end_ch(s1, set, set_len) + 1;
	if (end < start)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
