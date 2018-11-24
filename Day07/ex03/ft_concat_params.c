/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:06:14 by tidadi            #+#    #+#             */
/*   Updated: 2018/08/30 17:10:50 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		j;
	int		k;
	int		mem;

	mem = 0;
	i = 1;
	while (i < argc)
		mem += ft_strlen(argv[i++]) + 1;
	args = (char*)malloc(sizeof(char) * mem);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			args[k++] = argv[i][j++];
		if (i == argc - 1)
			args[k++] = '\0';
		else
			args[k++] = '\n';
		i++;
	}
	return (args);
}
