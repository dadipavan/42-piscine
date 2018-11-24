/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:01:37 by tidadi            #+#    #+#             */
/*   Updated: 2018/08/23 19:01:48 by tidadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
		str++;
	str--;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		str++;
	result = 0;
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (result * sign);
}
