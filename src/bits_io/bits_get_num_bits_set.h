/**
 * @author waterproofpatch
 * @brief prototype for bits_get_num_bits_set
 */
#ifndef _BITS_GET_NUM_BITS_SET_H_
#define _BITS_GET_NUM_BITS_SET_H_

#include <stddef.h>

/**
 * @brief Get the num bits set in the supplied object
 *
 * @param data: the data to count the number of bits set for
 * @param len_bytes: the length, in bytes, of data
 *
 * @return: unsigned char number of bits set in this data
 */
unsigned char bits_get_num_bits_set(void *data, size_t len_bytes);

#endif /* _BITS_GET_NUM_BITS_SET_H_ */
