/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-2001, Patrick Powell, San Diego, CA
 *     papowell@lprng.com
 * See LICENSE for conditions of use.
 * $Id: lockfile.h,v 1.28 2001/11/16 16:06:48 papowell Exp $
 ***************************************************************************/



#ifndef _LOCKFILE_H_
#define _LOCKFILE_H_ 1

/* PROTOTYPES */

int Do_lock( int fd, int block );
int LockDevice(int fd, int block);

#endif
