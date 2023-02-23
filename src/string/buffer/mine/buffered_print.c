#include <stdio.h>
#include <string.h>

#include "buffered_print.h"

#define BUFFER_LENGTH (32)

static size_t s_buffer_index = 0u;
static char s_buffer[BUFFER_LENGTH];

void buffered_printf(const char* src)
{

	size_t total_size = strlen(src); /* 총 글자 수 */
	
	while(total_size > 0){
		size_t copy_count = BUFFER_LENGTH - 1 - s_buffer_index;
		const int buffer_empty = s_buffer_index == 0;
		
		if(total_size < copy_count){
			copy_count = total_size;
		}
		total_size -= copy_count;
		s_buffer_index += copy_count;
		
		if(buffer_empty){
			strncpy(s_buffer, src, copy_count);
			s_buffer[s_buffer_index] = '\0';
		}else{
			strncat(s_buffer, src, copy_count);
		}
		
		
		src += copy_count;
		
		if(s_buffer_index == BUFFER_LENGTH - 1){
			printf("%s\n", s_buffer);
			s_buffer_index = 0u;
		}
	}
}

void buffered_flush(void)
{
	printf("%s\n", s_buffer);
}

