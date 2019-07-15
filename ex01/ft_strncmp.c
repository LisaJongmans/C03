/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:43:03 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/15 15:47:40 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
		{
			diff = (s1[i] - s2[i]);
			return (diff);
		}
		else
			i++;
	}
	return (diff);
}

int		main(void)
{
	unsigned int n;
	char str1[] = "abcdefg";
	char str2[] = "abcdefghijkl";

	n = 3;
	ft_strncmp(str1, str2, n);
	return (0);
}
