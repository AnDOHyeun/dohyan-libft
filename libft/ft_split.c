/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 02:04:31 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/30 02:04:33 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split_strlen(char *str, char c, int s)
{
	int	i;

	i = 0;
	while (str[s] && str[s] != c)
	{
		s++;
		i++;
	}
	return (i);
}

static char	*ft_split_strdup(char *str, char c, int s)
{
	int		i;
	int		len;
	char	*tmp;

	i = 0;
	len = ft_split_strlen(str, c, s);
	if (len <= 0 || str == 0)
		return (0);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == 0)
		return (0);
	while (i < len)
	{
		tmp[i] = str[s + i];
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}

static char	**ft_split_strcut(char **strs, char *str, char c)
{
	int		i;
	int		s;
	char	*tmp;

	i = 0;
	s = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			tmp = ft_split_strdup(str, c, i);
			strs[s++] = tmp;
			i += (int)ft_strlen(tmp) - 1;
		}
		i++;
	}
	strs[s] = 0;
	return (strs);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		cnt;
	char	**strs;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			cnt++;
		if (s[i] != c && s[i + 1] == 0)
			cnt++;
		i++;
	}
	strs = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (strs == 0)
		return (strs);
	strs = ft_split_strcut(strs, s, c);
	return (strs);
}
