/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:23:03 by hlaineka          #+#    #+#             */
/*   Updated: 2020/05/19 13:24:04 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	selector(t_tags *command, va_list *source)
{
	char	specifier;

	specifier = command->specifier;
	if (specifier == 's')
		return (print_s(command, source));
	if (specifier == 'c' || specifier == '%')
		return (print_c(command, source));
	if (specifier == 'p')
		return (print_p(command, source));
	if (specifier == 'x' || specifier == 'X')
		return (print_x(command, source));
	if (specifier == 'd' || specifier == 'i')
		return (print_d(command, source));
	if (specifier == 'u')
		return (print_u(command, source));
	if (specifier == 'o')
		return (print_o(command, source));
	if (specifier == 'f')
		return (print_f(command, source));
	return (0);
}

static void	initialize_command(t_tags *command)
{
	command->specifier = '\0';
	command->positive_value = FALSE;
	command->flag_zero = FALSE;
	command->flag_minus = FALSE;
	command->flag_plus = FALSE;
	command->flag_space = FALSE;
	command->flag_hash = FALSE;
	command->width = -1;
	command->width_address = FALSE;
	command->precision = -1;
	command->precision_address = FALSE;
	command->length = -1;
	command->length_hh = FALSE;
	command->length_h = FALSE;
	command->length_l = FALSE;
	command->length_ll = FALSE;
	command->length_lll = FALSE;
	command->empty = FALSE;
}

static int	check_command(const char *format, t_tags *command, va_list *source)
{
	int		w;

	w = 1;
	while (format[w] != '\0' && !is_specifier(format[w]))
	{
		if (format[w] == '-' || format[w] == '+' || format[w] == ' ' ||
		format[w] == '#' || (command->precision == -1 && command->width == -1
		&& !command->flag_zero && format[w] == '0'))
			set_flag(command, format[w]);
		else if (ft_isdigit(format[w]) || format[w] == '*')
			if (command->precision == -1)
				set_width(command, format[w], source);
			else
				set_precision(command, format[w], source);
		else if (format[w] == '.')
			set_precision(command, format[w], source);
		else if (format[w] == 'h' || format[w] == 'l' || format[w] == 'L')
			set_length(command, format[w]);
		w++;
	}
	if (format[w] == '\0' || !is_specifier(format[w]))
		command->empty = TRUE;
	else
		command->specifier = format[w];
	return (w);
}

static char	*make_string(char *printable, char c)
{
	char	*returnable;
	
	if (!printable)
	{	
		returnable = (char*)malloc(sizeof(char) * 2);
		returnable[0] = c;
		returnable[1] = '\0';
	}
	else
		returnable = ft_str_char_join(c, printable);
	return(returnable);
}

void		printer(char *string, int *printed)
{
	if (string)
	{
		ft_putstr(string);
		*printed = *printed + ft_strlen(string);
		free(string); 
		string = NULL;
	}
}

int			ft_printf(const char *format, ...)
{
	va_list source;
	int		i;
	t_tags	*command;
	int		printed;
	char	*printable;

	va_start(source, format);
	command = (t_tags*)malloc(sizeof(t_tags));
	printed = 0;
	i = 0;
	printable = NULL;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			printer(printable, &printed);
			initialize_command(command);
			i = i + check_command(&format[i], command, &source) + 1;
			if (command->empty)
				break ;
			printed = printed + selector(command, &source);
		}
		else
			printable = make_string(printable, format[i++]);
	}
	printer(printable, &printed);
	free(command);
	va_end(source);
	return (printed);
}
