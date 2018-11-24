/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 22:38:54 by tidadi            #+#    #+#             */
/*   Updated: 2018/08/31 22:39:29 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				**ft_split_whitespaces(char *str);

int					ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*n_str;
	int		i;

	i = -1;
	n_str = (char*)malloc(sizeof(char) * ft_sizeof(src));
	while (src[++i])
		n_str[i] = src[i];
	n_str[i] = '\0';
	return (n_str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*arr;
	int					i;

	i = -1;
	arr = (struct s_stock_par*)malloc((ac + 1) * sizeof(t_stock_par));
	while (++i < ac)
	{
		arr[i].size_param = ft_sizeof(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		arr[i].tab = ft_split_whitespaces(av[i]);
	}
	arr[i].str = 0;
	return (arr);
}
