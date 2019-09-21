#include "get_num_bits_set_dword.h"

unsigned char get_num_bits_set_dword(unsigned int dword)
{
    unsigned char num          = 0;
    unsigned char bits_in_byte = 8;
    for (unsigned int i = 0; i < sizeof(dword) * bits_in_byte; i++)
    {
        if (dword & (1 << i))
        {
            num++;
        }
    }
    return num;
}