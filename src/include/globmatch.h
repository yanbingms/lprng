/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-2001, Patrick Powell, San Diego, CA
 *     papowell@lprng.com
 * See LICENSE for conditions of use.
 * $Id: globmatch.h,v 1.4 2002/02/09 03:37:37 papowell Exp $
 ***************************************************************************/



#ifndef _GLOBMATCH_H_
#define _GLOBMATCH_H_ 1

/* PROTOTYPES */
int glob_pattern( char *pattern, const char *str );
int Globmatch( char *pattern, const char *str );
int Globmatch_list( struct line_list *l, char *str );

#endif
