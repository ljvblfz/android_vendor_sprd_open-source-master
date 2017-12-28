/*
 * modem_mem_map.h
 *
 *  Created on: Apr 29, 2014
 *      Author: SPREADTRUM\yunlong.shi
 */

#ifndef MODEM_MEM_MAP_H_
#define MODEM_MEM_MAP_H_

#if 1//new
//parm memory map
#define PARM_BASE_ADDR 0x80000000
#define PARM_TOTAL_SIZE 0x1600000
#define PARM_DSP_OFFSET (PARM_BASE_ADDR + 0x20000)
#define PARM_DSP_SIZE 0x3E0000
#define PARM_CODE_OFFSET (PARM_BASE_ADDR + 0x400000)
#define PARM_CODE_SIZE 0x670000
#define PARM_FIX_NV_OFFSET (PARM_BASE_ADDR + 0xA90000)
#define PARM_FIX_NV_SIZE 0x20000
#define PARM_RUN_NV_OFFSET (PARM_FIX_NV_OFFSET + PARM_FIX_NV_SIZE)
#define PARM_RUN_NV_SIZE 0x40000
#define PARM_CMD_LINE_OFFSET (PARM_BASE_ADDR + 0xAF0000)
#define PARM_CMD_LINE_SIZE 0x10000
//ca5 memory map
#define CA5_BASE_ADDR (PARM_BASE_ADDR + PARM_TOTAL_SIZE)
#define CA5_TG_DSP_OFFSET (CA5_BASE_ADDR + 0x20000)
#define CA5_TG_DSP_SIZE 0x3E0000
#define CA5_CODE_OFFSET (CA5_BASE_ADDR + 0x400000)
#define CA5_CODE_SIZE 0x8F0000
#define CA5_FIX_NV_OFFSET (CA5_BASE_ADDR + 0xD10000)
#define CA5_FIX_NV_SIZE 0x40000
#define CA5_RUN_NV_OFFSET (CA5_FIX_NV_OFFSET + CA5_FIX_NV_SIZE)
#define CA5_RUN_NV_SIZE 0x60000
#define CA5_CMD_LINE_OFFSET (CA5_BASE_ADDR + 0xD70000)
#define CA5_CMD_LINE_SIZE 0x10000
#define CA5_LTE_DSP_OFFSET (CA5_BASE_ADDR + 0xD80000)
#define CA5_LTE_DSP_SIZE 0x200000
#else//old
//parm memory map
#define PARM_BASE_ADDR 0x80000000
#define PARM_TOTAL_SIZE 0x1B00000
#define PARM_DSP_OFFSET (PARM_BASE_ADDR + 0x20000)
#define PARM_DSP_SIZE 0x3E0000
#define PARM_CODE_OFFSET (PARM_BASE_ADDR + 0x400000)
#define PARM_CODE_SIZE 0x5F0000
#define PARM_FIX_NV_OFFSET (PARM_BASE_ADDR + 0xA10000)
#define PARM_FIX_NV_SIZE 0x20000
#define PARM_RUN_NV_OFFSET (PARM_FIX_NV_OFFSET + PARM_FIX_NV_SIZE)
#define PARM_RUN_NV_SIZE 0x40000
#define PARM_CMD_LINE_OFFSET (PARM_BASE_ADDR + 0xA70000)
#define PARM_CMD_LINE_SIZE 0x10000
//ca5 memory map
#define CA5_BASE_ADDR (PARM_BASE_ADDR + PARM_TOTAL_SIZE)
#define CA5_TG_DSP_OFFSET (CA5_BASE_ADDR + 0x20000)
#define CA5_TG_DSP_SIZE 0x3E0000
#define CA5_CODE_OFFSET (CA5_BASE_ADDR + 0x400000)
#define CA5_CODE_SIZE 0x780000
#define CA5_FIX_NV_OFFSET (CA5_BASE_ADDR + 0xB90000)
#define CA5_FIX_NV_SIZE 0x20000
#define CA5_RUN_NV_OFFSET (CA5_FIX_NV_OFFSET + CA5_FIX_NV_SIZE)
#define CA5_RUN_NV_SIZE 0x40000
#define CA5_CMD_LINE_OFFSET (CA5_BASE_ADDR + 0xBF0000)
#define CA5_CMD_LINE_SIZE 0x10000
#define CA5_LTE_DSP_OFFSET (CA5_BASE_ADDR + 0xC00000)
#define CA5_LTE_DSP_SIZE 0x200000
#endif

#endif /* MODEM_MEM_MAP_H_ */
