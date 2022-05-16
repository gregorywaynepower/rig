#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

const char *rim_last_error(void);

int rim_get_default(char *ptr, size_t size);

int rim_list(char *ptr, size_t size);

int rim_set_default(const char *ptr);

int rim_start_rstudio(const char *pversion, const char *pproject);