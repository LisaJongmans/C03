/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:29:00 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/16 18:18:16 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while ((src[i] != '\0') && (i < nb))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int		main(void)
{
	unsigned int	nb;
	char			str1[25] = "abcdefg";
	char			str2[] = "abcdefghijkl";

	nb = 6;
	ft_strncat(str1, str2, nb);
	return (0);
}
