/* $NetBSD: negsf2.c,v 1.1 2000/06/06 08:15:07 bjh21 Exp $ */
/** @file
*
*  Copyright (c) 2013 - 2014, ARM Limited. All rights reserved.
*
*  This program and the accompanying materials
*  are licensed and made available under the terms and conditions of the BSD License
*  which accompanies this distribution.  The full text of the license may be found at
*  http://opensource.org/licenses/bsd-license.php
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
**/
/*
 * Written by Ben Harris, 2000.  This file is in the Public Domain.
 */

#include "softfloat-for-gcc.h"
#include "milieu.h"
#include "softfloat.h"

#include <sys/cdefs.h>
#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: negsf2.c,v 1.1 2000/06/06 08:15:07 bjh21 Exp $");
#endif /* LIBC_SCCS and not lint */

float32 __negsf2(float32);

float32
__negsf2(float32 a)
{

    /* libgcc1.c says INTIFY(-a) */
    return a ^ 0x80000000;
}
