#ifndef _TEST_DATA_H_
#define _TEST_DATA_H_

typedef struct
{
    unsigned char bits_set;
    unsigned int  test_data;
} test_entry_t;

typedef struct
{
    unsigned char      bits_set;
    unsigned long long test_data;
} test_entry_64bit_t;

#endif
