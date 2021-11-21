/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:30:28 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/16 09:24:05 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ld = ft_strlen(dst);
	ls = ft_strlen((char *)src);
	i = 0;
	if (size && ld < size - 1)
	{	
		dst += ld;
		while (*src && ld + i < size - 1)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}	
	if (ld >= size)
		ld = size;
	return (ls + ld);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c[8] = "strs";
	printf("%lu ", strlcat(c, "hati", sizeof(c)));
	printf("%s\n", c);
	char b[8] = "strs";
	printf("%zu ", ft_strlcat(b, "hati", sizeof(b)));
	printf("%s\n", b);

}*/
