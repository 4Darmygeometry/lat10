#ifndef LAXED_H 
#define LAXED_H 
#include "latx-disassemble-trace.h"
#include "xed/xed-interface.h"
struct la_dt_insn *laxed_get_from_insn(int64_t address, xed_decoded_inst_t *inputinfo,
    int ir1_num, void *pir1_base);
#endif
