//
// Created by Zhukov on 2020/7/23.
//

#ifndef MODBUSMASTER_REGISTER_H
#define MODBUSMASTER_REGISTER_H

#define MIN_READ_REGISTERS 0
#define MAX_READ_REGISTERS 0xFFFF
#define MAX_READ_REGISTERS_LENGTH 0x20

#define MIN_WRITE_SINGLE_REGISTER 0
#define MAX_WRITE_SINGLE_REGISTER 0xFFFF

#define MIN_WRITE_MULTIPLE_REGISTERS 0
#define MAX_WRITE_MULTIPLE_REGISTERS 0xFFFF
#define MAX_WRITE_MULTIPLE_REGISTERS_LENGTH 0x20

#define MIN_READ_COILS 0
#define MAX_READ_COILS 0x0FFF
#define MAX_READ_COILS_LENGTH 0x20

#define MIN_WRITE_SINGLE_COIL 0
#define MAX_WRITE_SINGLE_COIL 0x0FFF

#define MIN_WRITE_MULTIPLE_COILS 0
#define MAX_WRITE_MULTIPLE_COILS 0x0FFF
#define MAX_WRITE_MULTIPLE_COILS_LENGTH 0x20

union register_union
{
    uint8_t u8[0x20000];
    uint16_t u16[0x10000];
    uint32_t u32[0x8000];
    uint64_t u64[0x4000];
};

extern union register_union registers;

#endif //MODBUSMASTER_REGISTER_H
