/**
 * @brief test data definition
 */
#include "test_data.h" /* test_entry_t, etc. */

test_entry_t test_entries[] = {
    {.bits_set = 1, .test_data = 0x00000001},
    {.bits_set = 1, .test_data = 0x10000000},
    {.bits_set = 24, .test_data = 0xdeadbeef},
    {.bits_set = 24, .test_data = 0xfeedface},
    {.bits_set = 16, .test_data = 0x0ff0ff00},
    {.bits_set = 0, .test_data = 0x00000000},
    {.bits_set = 32, .test_data = 0xffffffff},
};

test_entry_64bit_t test_entries_64bit[] = {
    {.bits_set = 2, .test_data = 0x0000000100000001},
    {.bits_set = 2, .test_data = 0x1000000010000000},
    {.bits_set = 48, .test_data = 0xdeadbeefdeadbeef},
    {.bits_set = 48, .test_data = 0xfeedfacefeedface},
    {.bits_set = 32, .test_data = 0x0ff0ff000ff0ff00},
    {.bits_set = 0, .test_data = 0x0000000000000000},
    {.bits_set = 64, .test_data = 0xffffffffffffffff},
};

unsigned int num_entries = sizeof(test_entries) / sizeof(test_entries[0]);
unsigned int num_entries_64 =
    sizeof(test_entries_64bit) / sizeof(test_entries_64bit[0]);
