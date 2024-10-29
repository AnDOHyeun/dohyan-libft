/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:03:02 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/30 03:03:05 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnbr(char *num, int n, int flag)
{
	int	i;
	int	cnt;
	int	nb;

	i = 0;
	cnt = flag;
	nb = n;
	while (nb != 0)
	{
		nb = nb / 10;
		cnt++;
	}
	num = (char *)malloc(sizeof(char) * cnt + 1);
	if (!num)
		return (num);
	if (flag == 1)
		num[i] = '-';
	while (i < cnt - flag)
	{
		num[cnt - i - 1] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	num[cnt] = 0;
	return (num);
}

char	*ft_itoa(int n)
{
	int		flag;
	char	*tmp;

	flag = 0;
	tmp = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		flag = 1;
	}
	tmp = ft_strnbr(tmp, n, flag);
	return (tmp);
}
