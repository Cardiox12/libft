#include <criterion/criterion.h>
#include "ft_objects.h"
#include "ft_strings.h"

#define SEP_SPACE ' '

static char *strs[] = {"Hello", "World"};

Test(sample, simple)
{
	const char		*s = "Hello World";
	t_string_list	*list;

	list = split(s, ' ');
	if (list == NULL)
		return ;
	cr_expect(list->length == 2, "Expected 2 but got %i", list->length);
	for (int i = 0 ; i < list->length ; i++)
		cr_expect(strcmp(list->items[i], strs[i]) == 0, "Expected %s but got %s", list->items[i], strs[i]);
}