/* 
 * File:   shell_sbin.h
 * Author: TERU
 *
 * Created on September 16, 2016, 5:22 PM
 */

#ifndef SHELL_SBIN_H
#define	SHELL_SBIN_H

#include "file.h"

//safty directory (実はsuper userではない)

file_t sbin_create();

int sbin_rst(int,char**);
int sbin_sel(int,char**);
int16_t address_get();
int bin_nothing();
int sbin_sync(int argc,char** argv);

#endif	/* SHELL_SBIN_H */

