#include <stddef.h>

#include "get_num_bits_set.h"

/**
 * @brief Get the num bits set byte object
 *
 * @param byte to get the number of bits set for
 * @return unsigned char number of bits set
 */
static unsigned char get_num_bits_set_byte(unsigned char byte);

unsigned char get_num_bits_set(void* data, size_t len_bytes)
{
    unsigned char num_bits_set = 0;
    for (size_t i = 0; i < len_bytes; i++)
    {
        unsigned char data_char = *((unsigned char*)data + i);
        num_bits_set += get_num_bits_set_byte(data_char);
    }
    return num_bits_set;
}

static unsigned char get_num_bits_set_byte(unsigned char byte)
{
    unsigned char num          = 0;
    unsigned char bits_in_byte = 8;
    for (unsigned int i = 0; i < sizeof(byte) * bits_in_byte; i++)
    {
        if (byte & (1 << i))
        {
            num++;
        }
    }
    return num;
}
