/// @file getdents.c
/// @brief
/// @copyright (c) 2014-2022 This file is distributed under the MIT License.
/// See LICENSE.md for details.

#include "sys/unistd.h"
#include "system/syscall_types.h"
#include "sys/errno.h"


_syscall3(int, getdents, int, fd, dirent_t *, dirp, unsigned int, count)
