/*
 @ Kingsley Chen
*/

#if defined(_MSC_VER)
#pragma once
#endif

#ifndef KBASE_BASIC_TYPES_H_
#define KBASE_BASIC_TYPES_H_

#include <cstdint>
#include <string>

// Defines types that would be shared by among several files.
namespace kbase {

// |PathKey| is used by |PathService| and |BasePathProvider|.
using PathKey = int;

using PathChar = wchar_t;
using PathString = std::basic_string<PathChar>;

using byte = uint8_t;

}   // namespace kbase

#endif  // KBASE_BASIC_TYPES_H_