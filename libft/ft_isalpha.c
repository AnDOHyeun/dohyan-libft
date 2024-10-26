/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyan <.student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:21:33 by dohyan            #+#    #+#             */
/*   Updated: 2024/10/22 22:50:43 by dohyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1024);
	if (c >= 'A' && c <= 'Z')
		return (1024);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

nt	main(void)
{
	printf("a %d\n",ft_isalpha('a'));
	printf("A %d\n",ft_isalpha('A'));
	printf("3 %d\n",ft_isalpha(3));
	printf("a %d\n",isalpha('a'));
	printf("A %d\n",isalpha('A'));
	printf("3 %d\n",isalpha(3));
}
*/
