/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:50:55 by tidadi            #+#    #+#             */
/*   Updated: 2018/08/28 19:51:35 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if ('a' <= str[0] && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]))
		{
			if (ft_is_alphanumeric(str[i - 1]))
			{
				if ('A' <= str[i] && str[i] <= 'Z')
					str[i] = str[i] - 'A' + 'a';
			}
			else if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
