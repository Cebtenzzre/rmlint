/**
 *  This file is part of rmlint.
 *
 *  rmlint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  rmlint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with rmlint.  If not, see <http://www.gnu.org/licenses/>.
 *
 ** Author: Christopher Pahl <sahib@online.de>:
 ** Hosted on http://github.com/sahib/rmlint
 *
 **/

#ifndef LINTTESTS_H_INCLUDED
#define LINTTESTS_H_INCLUDED

#include <sys/types.h>
#include <sys/stat.h>
#include <fts.h>
#include "useridcheck.h"

int uid_gid_check(FTSENT *fts_ent, RmSession *session);
bool is_nonstripped(FTSENT *afile, RmSettings *settings);
char * rmlint_basename(char *filename);
ino_t parent_node(char *apath);

#endif /* LINTTESTS_H_INCLUDED*/