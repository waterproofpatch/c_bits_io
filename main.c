/**
 * Get the number of bits set in a 32 bit unsigned integer.
 * */
#include <stdio.h>
#include <assert.h>

#include "test_data.h"
#include "get_num_bits_set_dword.h"

// defined in test_data.c
extern unsigned int num_entries;
extern test_entry_t test_entries[];

int main(int argc, char** argv)
{
    for (int i = 0; i < num_entries; i++)
    {
        unsigned int  test_dword         = test_entries[i].test_data;
        unsigned char num_bits_set       = test_entries[i].bits_set;
        unsigned char calculatd_bits_set = get_num_bits_set_dword(test_dword);
        printf("dword: 0x%08x, calculated: %d, actual: %d\n", test_dword,
               calculatd_bits_set, num_bits_set);
        assert(num_bits_set == calculatd_bits_set);
    }
    return 0;
}
