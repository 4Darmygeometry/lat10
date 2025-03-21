/**
 * @file aot_recover_tb.h
 * @author wwq <weiwenqiang@mail.ustc.edu.cn>
 * @brief AOT header
 */
#ifndef _AOT_RECOVER_TB_H_
#define _AOT_RECOVER_TB_H_ 
#include "aot.h"
void do_recover_segment(aot_segment *p_segment, abi_long start, 
        abi_long end);
int load_page(target_ulong pc, uint32_t cflags);
int load_page_4(target_ulong pc, uint32_t cflags);
/* void print_tb(TranslationBlock *tb); */

#endif
