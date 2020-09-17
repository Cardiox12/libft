#include <criterion/criterion.h>
#include <limits.h>
#include "ft_objects.h"

# define STRING_ARRAY_SIZE 10
# define TEST_STRING "Test"

static char *strings[STRING_ARRAY_SIZE] = {
	"string 0",
	"string 1",
	"string 2",
	"string 3",
	"string 4",
	"string 5",
	"string 6",
	"string 7",
	"string 8",
	"string 9"
};

static char *strings_popped[STRING_ARRAY_SIZE - 1] = {
	"string 0",
	"string 1",
	"string 2",
	"string 3",
	"string 4",
	"string 5",
	"string 6",
	"string 7",
	"string 9"
};

static void	string_list_populate(t_string_list *list)
{
	for (int i = 0 ; i < STRING_ARRAY_SIZE ; i++){
		string_list_append(list, strings[i]);
	}
}

Test(sample, test)
{
	t_string_list *list;

	string_list_create(&list);
	if (list != NULL)
		cr_expect(list->length == 0, "Expected to have length of %i but go %i\n", 0, list->length);
	else
		cr_assert_null(list, "Expect list to be null in case of memory allocation error.\n");
	free(list);
}

Test(sample, test_1)
{
	t_string_list *list;

	string_list_create(&list);
	
	for (int i = 0 ; i < STRING_ARRAY_SIZE ; i++)
		string_list_insert(list, list->length, strings[i]);
	for (int i = 0 ; i < list->length ; i++)
		cr_expect_str_eq(strings[i], list->items[i], "Expected %s but got %s\n", strings[i], list->items[i]);
	string_list_insert(list, (int)list->length / 2, TEST_STRING);
	cr_expect_str_eq(list->items[(int)list->length / 2], TEST_STRING, "Expected %s but got %s\n", list->items[(int)list->length / 2], TEST_STRING);
	free(list);
}

Test(sample, test_2)
{
	t_string_list *list;

	string_list_create(&list);

	for (int i = 0 ; i < STRING_ARRAY_SIZE ; i++)
		string_list_append(list, strings[i]);
	for (int i = 0 ; i < STRING_ARRAY_SIZE ; i++)
		cr_expect_str_eq(list->items[i], strings[i], "Expected %s but got %s\n", list->items[i], strings[i]);
	free(list);
}

Test(sample, test_3)
{
	t_string_list	*list;
	int				ret;

	string_list_create(&list);
	string_list_populate(list);
	ret = string_list_pop(list, 8);
	cr_expect(ret == NO_ERROR, "Expected %i but got %i\n", NO_ERROR, ret);
	for (int i = 0 ; i < STRING_ARRAY_SIZE - 1 ; i++){
		cr_expect_str_eq(strings_popped[i], list->items[i], "Expected %s but got %s\n", strings_popped[i], list->items[i]);
	}
	ret = string_list_pop(list, INT_MAX);
	cr_expect(ret == ERR_INDEX_OUT_OF_RANGE, "Expected %i but got %i\n", ERR_INDEX_OUT_OF_RANGE, ret);
	ret = string_list_pop(list, -1);
	cr_expect(ret == ERR_NEG_INDEX, "Expected %i but got %i\n", ERR_NEG_INDEX, ret);
}

Test(sample, test_4)
{
	t_string_list	*list;

	string_list_create(&list);
	string_list_populate(list);

	for (int i = 0 ; i < STRING_ARRAY_SIZE ; i++){
		const int ret = string_list_pop_last(list);

		cr_expect(ret == NO_ERROR, "Expected %i but got %i\n", NO_ERROR, ret);
	}
	cr_expect(list->length == 0, "Expected %i but got %i\n", 0, list->length);
	string_list_pop_last(list);
	cr_expect(list->length == 0, "Expected %i but got %i\n", 0, list->length);
}