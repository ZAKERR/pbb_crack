#pragma once
#include "doEnc.h"

struct fInfo 
{
    const unsigned char *addr;
    std::size_t size;
    std::wstring path;
};

namespace utils {
pvKey str2key(const char *str);
fInfo loadFile(const char *filename);

void output(const unsigned char *mem, std::size_t size);
};


