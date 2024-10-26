/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 06:55:38 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/25 06:55:40 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t		i;
	size_t		len;
	char		*tmp;

	i = 0;
	len = ft_strlen(src) + 1;
	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (0);
	while (src[i])
	{
		tmp[i] = (char)src[i];
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
