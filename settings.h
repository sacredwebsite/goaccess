/**
 * Copyright (C) 2009-2013 by Gerardo Orellana <goaccess@prosoftcorp.com>
 * GoAccess - An Ncurses apache weblog analyzer & interactive viewer
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * A copy of the GNU General Public License is attached to this
 * source distribution for its full text.
 *
 * Visit http://goaccess.prosoftcorp.com for new releases.
 */

#ifndef SETTINGS_H_INCLUDED
#define SETTINGS_H_INCLUDED

#include <limits.h>

/* predefined log dates */
typedef struct GPreConfDate_
{
   const char *apache;
   const char *w3c;
   const char *cloudfront;
} GPreConfDate;

/* predefined log formats */
typedef struct GPreConfLog_
{
   const char *combined;
   const char *common;
   const char *vcombined;
   const char *vcommon;
   const char *w3c;
   const char *cloudfront;
} GPreConfLog;

typedef struct GConfKeyword_
{
   const unsigned short key_id;
   const char *keyword;
} GConfKeyword;

typedef struct GConf_
{
   char *date_format;
   char iconfigfile[_POSIX_PATH_MAX];
   char *ifile;
   char *ignore_host;
   char *log_format;
   int bandwidth;
   int color_scheme;
   int list_agents;
   int load_conf_dlg;
   int mouse_support;
   int output_html;
   int serve_secs;
   int serve_usecs;
   int skip_resolver;
} GConf;

char *get_selected_date_str (size_t idx);
char *get_selected_format_str (size_t idx);
size_t get_selected_format_idx ();

extern GConf conf;
extern char *tmp_log_format;
extern char *tmp_date_format;

int parse_conf_file ();
void write_conf_file ();

#endif
