/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:45:49 by tidadi            #+#    #+#             */
/*   Updated: 2018/08/27 20:59:58 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;
	int rem;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = 0;
		if (str[i] == to_find[a])
		{
			rem = i;
			while (str[i] == to_find[a])
			{
				if (to_find[a + 1] == '\0')
					return (&str[rem]);
				a++;
				i++;
			}
			i = rem;
		}
		i++;
	}
	return (0);
}
