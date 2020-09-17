#include <criterion/criterion.h>
#include "ft_objects.h"
#include "ft_strings.h"

#define SEP_SPACE ' '

static char *strs[] = {"Hello", "World"};

Test(sample, simple)
{
	const char		*s = "Hello World";
	t_string_list	*list;

	list = ft_split(s, ' ');
	if (list == NULL)
		return ;
	cr_expect(list->length == 2, "Expected 2 but got %i", list->length);
	for (int i = 0 ; i < list->length ; i++)
		cr_expect(strcmp(list->items[i], strs[i]) == 0, "Expected %s but got %s", list->items[i], strs[i]);
}

Test(sample, medium)
{
	char			*s = "";
	t_string_list	*list;

	list = ft_split(s, ' ');
	if (list == NULL)
		return ;
	cr_expect(list->length == 1, "Expected 1 but got %i\n", list->length);
	cr_expect(*list->items[0] == '\0', "Expected empty string but got %s\n", list->items[0]);
}