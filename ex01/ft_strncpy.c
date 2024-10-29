/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:44:45 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/09 13:42:29 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*p;

	p = dest;
	i = 0;
	while (*src && i < n)
	{
		*p++ = *src++;
		i++;
	}
	while (i < n)
	{
		*p++ = '\0';
		i++;
	}
	return (dest);
}
