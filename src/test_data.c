#include "test_data.h"

test_entry_t test_entries[] = {
    {.bits_set = 1, .test_data = 0x00000001},
    {.bits_set = 1, .test_data = 0x10000000},
    {.bits_set = 24, .test_data = 0xdeadbeef},
    {.bits_set = 24, .test_data = 0xfeedface},
    {.bits_set = 16, .test_data = 0x0ff0ff00},
    {.bits_set = 0, .test_data = 0x00000000},
    {.bits_set = 32, .test_data = 0xffffffff},
};

unsigned int num_entries = sizeof(test_entries) / sizeof(test_entries[0]);
