/**
 * @author waterproofpatch
 * @brief get the number of bits set in a 32 bit unsigned integer.
 */
#include <stdio.h>  /* printf */
#include <assert.h> /* assert */

#include "test_data.h"             /* test_entry_t */
#include "bits_get_num_bits_set.h" /* bits_bits_get_num_bits_set */
#include "bits_print.h"            /* bits_print */

/* defined in test_data.c */
extern unsigned int       num_entries;
extern unsigned int       num_entries_64;
extern test_entry_t       test_entries[];
extern test_entry_64bit_t test_entries_64bit[];

static void test_bits_print();
static void test_bits_get_num_bits_set();

int main(int argc, char **argv)
{
    /* assume 32 bit integers, 64 bit double-wide integers (long long)
     * may not be reasonable on all systems
     */
    assert(sizeof(test_entries[0].test_data) == 4);
    assert(sizeof(test_entries_64bit[0].test_data) == 8);

    /* get num bits set test cases */
    test_bits_get_num_bits_set();

    /* bits print test cases */
    test_bits_print();

    return 0;
}

static void test_bits_print()
{
    printf("Testing bits print only\n");
    unsigned char  a;
    unsigned short b;

    /* chars */
    a = 0x0f;
    bits_print(&a, sizeof(unsigned char));
    a = 0xf0;
    bits_print(&a, sizeof(unsigned char));
    a = 0xff;
    bits_print(&a, sizeof(unsigned char));

    /* shorts */
    b = 0xff00;
    bits_print(&b, sizeof(unsigned short));
    b = 0x00ff;
    bits_print(&b, sizeof(unsigned short));
    b = 0xf0ff;
    bits_print(&b, sizeof(unsigned short));
    b = 0x0fff;
    bits_print(&b, sizeof(unsigned short));
}

static void test_bits_get_num_bits_set()
{
    for (int i = 0; i < num_entries; i++)
    {
        // get the test data
        unsigned int  test_dword   = test_entries[i].test_data;
        unsigned char num_bits_set = test_entries[i].bits_set;

        // call our utility function
        unsigned char calculatd_bits_set =
            bits_get_num_bits_set((void *)&test_dword, sizeof(unsigned int));
        printf("dword: 0x%08x, calculated: %d, actual: %d\n", test_dword,
               calculatd_bits_set, num_bits_set);

        // make sure our function works
        assert(num_bits_set == calculatd_bits_set);

        printf("binary rep:\n");
        /* print the binary rep */
        bits_print(&test_dword, sizeof(int));
    }

    for (int i = 0; i < num_entries_64; i++)
    {
        // get the test data
        unsigned long long test_dword   = test_entries_64bit[i].test_data;
        unsigned char      num_bits_set = test_entries_64bit[i].bits_set;

        // call our utility function
        unsigned char calculatd_bits_set = bits_get_num_bits_set(
            (void *)&test_dword, sizeof(unsigned long long));
        printf("dword: 0x%llx, calculated: %d, actual: %d\n", test_dword,
               calculatd_bits_set, num_bits_set);

        // make sure our function works
        assert(num_bits_set == calculatd_bits_set);

        printf("binary rep:\n");
        /* print the binary rep */
        bits_print(&test_dword, sizeof(long long));
    }
}
