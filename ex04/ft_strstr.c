/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:50:33 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/16 16:26:00 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		i = 0;
		while ((to_find[i] != str[j]) && (str[j] != '\0'))
			j++;
		count = 0;
		while ((to_find[i] == str[j]) || (to_find[i] == '\0'))
		{
			if (to_find[i] == '\0')
				return (&str[j - count]);
			i++;
			j++;
			count++;
		}
	}
	return (0);
}

int		main(void)
{
	char str1[] = "oabctogoabhtoai";
	char str2[] = "abhto";

	ft_strstr(str1, str2);
	return (0);
}
