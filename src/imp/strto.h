#ifndef ZAKAROUF_Z_IMP__STRTO_H
#define ZAKAROUF_Z_IMP__STRTO_H

#include "../types/typegen.h"

#define z__strto(str, v)\
    sscanf(str, z__typegen_def(*(v), "",\
                , (z__i16, "%hi")    \
                , (z__u16, "%hu")    \
                , (z__i32, "%i")     \
                , (z__u32, "%u")     \
                , (z__i64, "%lli")   \
                , (z__u64, "%llu")   \
                \
                , (z__f32, "%f")    \
                , (z__f64, "%lF")   \
                \
                , (char, "%c")   \
                , (char *, "%s")   \
              ), v)



#endif

