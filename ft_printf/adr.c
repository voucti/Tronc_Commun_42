# include <stdint.h>

uintptr_t addr;

addr = (uinptr_t)va_arg(args, int);
puthexa_fd(addr, 1, 1);
return (0);