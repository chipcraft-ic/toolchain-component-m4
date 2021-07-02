/* Manipulate sets of device-inode pairs efficiently.
   Copyright (C) 2010-2021 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Jim Meyering, 2010.  */

#ifndef _GL_DI_SET_H
# define _GL_DI_SET_H

# include <sys/types.h>

struct di_set *di_set_alloc (void);
int di_set_insert (struct di_set *, dev_t, ino_t) _GL_ATTRIBUTE_NONNULL ((1));
void di_set_free (struct di_set *) _GL_ATTRIBUTE_NONNULL ((1));
int di_set_lookup (struct di_set *dis, dev_t dev, ino_t ino)
  _GL_ATTRIBUTE_NONNULL ((1));

#endif