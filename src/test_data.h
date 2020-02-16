/**
 * @author waterproofpatch
 * @brief test data struct defs
 */

#ifndef _TEST_DATA_H_
#define _TEST_DATA_H_

typedef struct
{
    unsigned char bits_set;  /** hold number of bits set */
    unsigned int  test_data; /** value for test */
} test_entry_t;

typedef struct
{
    unsigned char      bits_set;
    unsigned long long test_data;
} test_entry_64bit_t;

#endif /* _TEST_DATA_H_ */
