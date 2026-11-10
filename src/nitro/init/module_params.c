#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_021c7a80[]; /* SDK_AUTOLOAD_LIST */
extern char data_021c7a98[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_021c7740[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_021c7a80,
    (void *) data_021c7a98,
    (void *) data_021c7740,
    (void *) data_021c7740,
    (void *) 0x022c9dc0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x03007532, /* SDK version 3.0.30002 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
