/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:55:43 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/16 09:31:29 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *c ="impliccit conversion is hard";
	printf("%s\n", ft_strrchr(c, 'i'));
	printf("%s", strrchr(c, 'i'));
}*/
