/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:01:48 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/30 03:01:51 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr2_fd(char *num, int n)
{
	int	i;
	int	cnt;
	int	nb;

	i = 0;
	cnt = 0;
	nb = n;
	while (nb != 0)
	{
		nb = nb / 10;
		cnt++;
	}
	while (i < cnt)
	{
		num[cnt - i - 1] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	num[i] = 0;
}

void	ft_putnbr_fd(int n, int fd)
{
	char	tmp[20];

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	ft_putnbr2_fd(tmp, n);
	write(fd, tmp, ft_strlen(tmp));
}
