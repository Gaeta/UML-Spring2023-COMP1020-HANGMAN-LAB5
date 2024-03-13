#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"

/** 
 * This is the test cases for my_string_push_back,my_string_pop_back,my_string_at, my_string_c_str, my_string_concat,my_string_empty
 * 
 * String: Hello World
 * use the other file for the test cases for my_string_init_default, my_string_destroy, my_string_get_size, my_string_extraction, my_string_insertion,
 * 
 * The test cases should be for each individual function
*/

// Test case for my_string_push_back
void test_my_string_push_back() {
    MY_STRING str = my_string_init_default();

    my_string_push_back(str, 'H');
    my_string_push_back(str, 'e');
    my_string_push_back(str, 'l');
    my_string_push_back(str, 'l');
    my_string_push_back(str, 'o');
    my_string_push_back(str, ' '); 
    my_string_push_back(str, 'W');
    my_string_push_back(str, 'o');
    my_string_push_back(str, 'r');
    my_string_push_back(str, 'l');
    my_string_push_back(str, 'd');

    printf("String after push_back: %s\n", my_string_c_str(str));

    my_string_destroy(&str);
}

// Test case for my_string_pop_back
void test_my_string_pop_back() {
    MY_STRING str = my_string_init_c_string("Hello World");

    printf("String before pop_back: %s\n", my_string_c_str(str));

    my_string_pop_back(str);

    printf("String after pop_back: %s\n", my_string_c_str(str));

    my_string_destroy(&str);
}

// Test case for my_string_at
void test_my_string_at() {
    MY_STRING str = my_string_init_c_string("Hello World");

    printf("Character at index 0: %s\n", my_string_at(str, 0));
    printf("Character at index 2: %s\n", my_string_at(str, 2));
    printf("Character at index 4: %s\n", my_string_at(str, 4));

    my_string_destroy(&str);
}

// Test case for my_string_c_str
void test_my_string_c_str() {
    MY_STRING str = my_string_init_c_string("Hello World");

    const char* c_str = my_string_c_str(str);

    printf("C string: %s\n", c_str);

    my_string_destroy(&str);
}

// Test case for my_string_concat
void test_my_string_concat() {
    MY_STRING str1 = my_string_init_c_string("Hello World 1");
    MY_STRING str2 = my_string_init_c_string("Hello World 2");

    my_string_concat(str1, str2);

    printf("Concatenated string: %s\n", my_string_c_str(str1));

    my_string_destroy(&str1);
    my_string_destroy(&str2);
}

// Test case for my_string_empty
void test_my_string_empty() {
    MY_STRING str = my_string_init_c_string("Hello World");

    printf("Is string empty? %s\n", my_string_empty(str) ? "Yes" : "No");

    // Empty entire string
    while (my_string_get_size(str) > 0) {
        printf("Deleted character: %s\n", my_string_at(str, my_string_get_size(str) - 1));
        my_string_pop_back(str);
    }

    printf("Is string empty? %s\n", my_string_empty(str) ? "Yes" : "No");

    my_string_destroy(&str);
}

int main() {
    printf("***** Push Back Test *****\n");
    test_my_string_push_back();

    printf("\n***** Pop Back Test *****\n");
    test_my_string_pop_back();

    printf("\n***** String At Test *****\n");
    test_my_string_at();

    printf("\n***** C Str Test *****\n");
    test_my_string_c_str();

    printf("\n***** Concat Test *****\n");
    test_my_string_concat();

    printf("\n***** Empty Test *****\n");
    test_my_string_empty();

    printf("*****End of test cases\n");

    return 0;
}
