#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#include "simpleio.h"

static void print_int(int num)
{
	if (num == 0) {
		return;
	}
	
	print_int(num / 10);
	fputc('0' + num % 10, stdout);
}

void printf_simple(const char* msg, ...)
{
	va_list vl;
	va_start(vl, msg);
	while (*msg != '\0') {
		int val;
		const char* str;
		
		switch (*msg) {
			case 'c':
				val = va_arg(vl, int);
				fputc(val, stdout);
				break;
			case 's':
				str = va_arg(vl, const char*);
				while (*str != '\0') {
					fputc(*str++, stdout);
				}
				break;
			case 'd':
				val = va_arg(vl, int);
				print_int(val);
				break;
			default:
				fputc(*msg, stdout);
				break;
		}
		msg++;
	}
	va_end(vl);
}
