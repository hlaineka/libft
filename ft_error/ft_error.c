/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:14:06 by hlaineka          #+#    #+#             */
/*   Updated: 2021/02/25 12:40:47 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

/*
** functions ment to make manual error handling easier. A string array is
** initialized with all the error messages, and it can be accessed with the
** error number as an index. Added index 40, "Unknown error"
*/

int			g_ft_errno = 0;
extern char	*g_program_name;

static char	*g_errstrs[] =
{
	"\0",
	"Operation not permitted",
	"No such file or directory",
	"No such process",
	"Interrupted system call",
	"I/O error",
	"No such device or address",
	"Argument list too long",
	"Exec format error",
	"Bad file number",
	"No child processes",
	"Try again",
	"Out of memory",
	"Permission denied",
	"Bad address",
	"Block device required",
	"Device or resource busy",
	"File exists",
	"Cross-device link",
	"No such device",
	"Not a directory",
	"Is a directory",
	"Invalid argument",
	"File table overflow",
	"Too many open files",
	"Not a typewriter",
	"Text file busy",
	"File too large",
	"No space left on device",
	"Illegal seek",
	"Read-only file system",
	"Too many links",
	"Broken pipe",
	"Math argument out of domain of func",
	"Math result not representable",
	"Resource deadlock would occur",
	"File name too long",
	"No record locks available",
	"Function not implemented",
	"Directory not empty",
	"Too many symbolic links encountered",
	"Unknown error",
	"No message of desired type",
	"Identifier removed",
	"Channel number out of range",
	"Level 2 not synchronized",
	"Level 3 halted",
	"Level 3 reset",
	"Link number out of range",
	"Protocol driver not attached",
	"No CSI structure available",
	"Level 2 halted",
	"Invalid exchange",
	"Invalid request descriptor",
	"Exchange full",
	"No anode",
	"Invalid request code",
	"Invalid slot",
	"\0",
	"Bad font file format",
	"Device not a stream",
	"No data available",
	"Timer expired",
	"Out of streams resources",
	"Machine is not on the network",
	"Package not installed",
	"Object is remote",
	"Link has been severed",
	"Advertise error",
	"Srmount error",
	"Communication error on send",
	"Protocol error",
	"Multihop attempted",
	"RFS specific error",
	"Not a data message",
	"Value too large for defined data type",
	"Name not unique on network",
	"File descriptor in bad state",
	"Remote address changed",
	"Can not access a needed shared library",
	"Accessing a corrupted shared library",
	".lib section in a.out corrupted",
	"Attempting to link in too many shared libraries",
	"Cannot exec a shared library directly",
	"Illegal byte sequence",
	"Interrupted system call should be restarted",
	"Streams pipe error",
	"Too many users",
	"Socket operation on non-socket",
	"Destination address required",
	"Message too long",
	"Protocol wrong type for socket",
	"Protocol not available",
	"Protocol not supported",
	"Socket type not supported",
	"Operation not supported on transport endpoint",
	"Protocol family not supported",
	"Address family not supported by protocol",
	"Address already in use",
	"Cannot assign requested address",
	"Network is down",
	"Network is unreachable",
	"Network dropped connection because of reset",
	"Software caused connection abort",
	"Connection reset by peer",
	"No buffer space available",
	"Transport endpoint is already connected",
	"Transport endpoint is not connected",
	"Cannot send after transport endpoint shutdown",
	"Too many references: cannot splice",
	"Connection timed out",
	"Connection refused",
	"Host is down",
	"No route to host",
	"Operation already in progress",
	"Operation now in progress",
	"Stale NFS file handle",
	"Structure needs cleaning",
	"Not a XENIX named type file",
	"No XENIX semaphores available",
	"Is a named type file",
	"Remote I/O error",
	"Quota exceeded",
	"No medium found",
	"Wrong medium type",
	"Operation Canceled",
	"Required key not available",
	"Key has expired",
	"Key has been revoked",
	"Key was rejected by service",
	"Owner died",
	"State not recoverable",
	"Operation not possible due to RF-kill",
	"Memory page has hardware error"
};

char	*ft_strerror(int errnum)
{
	if (errnum == 0)
		errnum = g_ft_errno;
	return (g_errstrs[errnum]);
}

void	ft_perror(const char *message)
{
	if (message && message[0] != '\0')
		ft_printf("%r: ", message);
	ft_printf("%r\r\n", g_errstrs[g_ft_errno]);
}

void	ft_error(int status, int errnum, const char *format, ...)
{
	va_list source;

	va_start(source, format);
	if (g_program_name && g_program_name[0] != '\0')
		ft_printf("%r%s: ", g_program_name);
	if (errnum)
		ft_printf("%r%s: ", g_errstrs[g_ft_errno]);
	printer(format, &source);
	ft_printf("%r\r\n");
	if (status)
		ft_exit(status);
}
