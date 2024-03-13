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

// // Test case for my_string_at
// void test_my_string_at() {
//     MY_STRING str;
//     my_string_init(&str);

//     my_string_push_back(&str, 'H');
//     my_string_push_back(&str, 'e');
//     my_string_push_back(&str, 'l');
//     my_string_push_back(&str, 'l');
//     my_string_push_back(&str, 'o');

//     printf("Character at index 0: %c\n", my_string_at(&str, 0));
//     printf("Character at index 2: %c\n", my_string_at(&str, 2));
//     printf("Character at index 4: %c\n", my_string_at(&str, 4));

//     my_string_destroy(&str);
// }

// // Test case for my_string_c_str
// void test_my_string_c_str() {
//     MY_STRING str;
//     my_string_init(&str);

//     my_string_push_back(&str, 'H');
//     my_string_push_back(&str, 'e');
//     my_string_push_back(&str, 'l');
//     my_string_push_back(&str, 'l');
//     my_string_push_back(&str, 'o');

//     const char* c_str = my_string_c_str(&str);

//     printf("C string: %s\n", c_str);

//     my_string_destroy(&str);
// }

// // Test case for my_string_concat
// void test_my_string_concat() {
//     MY_STRING str1, str2;
//     my_string_init(&str1);
//     my_string_init(&str2);

//     my_string_push_back(&str1, 'H');
//     my_string_push_back(&str1, 'e');
//     my_string_push_back(&str1, 'l');
//     my_string_push_back(&str1, 'l');
//     my_string_push_back(&str1, 'o');

//     my_string_push_back(&str2, ' ');
//     my_string_push_back(&str2, 'W');
//     my_string_push_back(&str2, 'o');
//     my_string_push_back(&str2, 'r');
//     my_string_push_back(&str2, 'l');
//     my_string_push_back(&str2, 'd');

//     my_string_concat(&str1, &str2);

//     printf("Concatenated string: %s\n", my_string_c_str(&str1));

//     my_string_destroy(&str1);
//     my_string_destroy(&str2);
// }

// // Test case for my_string_empty
// void test_my_string_empty() {
//     MY_STRING str;
//     my_string_init(&str);

//     printf("Is string empty? %s\n", my_string_empty(&str) ? "Yes" : "No");

//     my_string_push_back(&str, 'H');
//     my_string_push_back(&str, 'e');
//     my_string_push_back(&str, 'l');
//     my_string_push_back(&str, 'l');
//     my_string_push_back(&str, 'o');

//     printf("Is string empty? %s\n", my_string_empty(&str) ? "Yes" : "No");

//     my_string_destroy(&str);
// }

int main() {
    test_my_string_push_back();
    test_my_string_pop_back();
    // test_my_string_at();
    // test_my_string_c_str();
    // test_my_string_concat();
    // test_my_string_empty();

    return 0;
}
