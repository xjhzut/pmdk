// SPDX-License-Identifier: BSD-3-Clause
/* Copyright 2018-2020, Intel Corporation */

/*
 * extent_none.c - fake implementation of the FS extent query API
 */

#include "out.h"
#include "extent.h"

/*
 * pmem2_extents_count -- get number of extents of the given file
 *                        (and optionally read its block size)
 */
long
pmem2_extents_count(int fd, struct extents *exts)
{
	LOG(3, "fd %i extents %p", fd, exts);

	return -1;
}

/*
 * pmem2_extents_get -- get extents of the given file
 *                      (and optionally read its block size)
 */
int
pmem2_extents_get(int fd, struct extents *exts)
{
	LOG(3, "fd %i extents %p", fd, exts);

	return -1;
}
