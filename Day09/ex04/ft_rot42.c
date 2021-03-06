/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:09:23 by tidadi            #+#    #+#             */
/*   Updated: 2018/08/31 16:14:38 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char	*ret;

	ret = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = (((*str - 'a' + 42) % 26) + 'a');
		if ('A' <= *str && *str <= 'Z')
			*str = (((*str - 'A' + 42) % 26) + 'A');
		str++;
	}
	return (ret);
}
