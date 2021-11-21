/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:42:19 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/16 15:37:22 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*b;
	int		i;

	i = 0;
	b = (char *)s;
	while (b[i])
	{
		if ((char)c == b[i])
			return (&b[i]);
		i++;
	}
	if (b[i] == (char )c)
		return (&b[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", ft_strchr("khit byad", 'c'));
	printf("%s", strchr("khit byad", 'c'));

}
*/