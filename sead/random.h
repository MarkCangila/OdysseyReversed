#pragma once

#include "types.h"

namespace sead
{
    class Random
    {
        public:
        void init();
        void init(u32);
        void init(u32, u32, u32, u32);
        u32 getU32();
        u64 getU64();
        void getContext(u32 *, u32 *, u32 *, u32 *) const;

        u32 mSeed1; // _0
        u32 mSeed2; // _4
        u32 mSeed3; // _8
        u32 mSeed4; // _C
    };
};