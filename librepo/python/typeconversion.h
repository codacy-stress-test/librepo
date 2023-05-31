/* librepo - A library providing (libcURL like) API to downloading repository
 * Copyright (C) 2012  Tomas Mlcoch
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef __LR_TYPECONVERSION_PY_H__
#define __LR_TYPECONVERSION_PY_H__

#include "librepo/repomd.h"
#include "librepo/yum.h"
#include "librepo/metalink.h"

PyObject *PyStringOrNone_FromString(const char *str);
PyObject *PyObject_FromYumRepo(LrYumRepo *repo);
PyObject *PyObject_FromYumRepo_v2(LrYumRepo *repo);
PyObject *PyObject_FromYumRepoMd(LrYumRepoMd *repomd);
PyObject *PyObject_FromYumRepoMd_v2(LrYumRepoMd *repomd);
PyObject *PyObject_FromMetalink(LrMetalink *metalink);
char *PyAnyStr_AsString(PyObject *str, PyObject **tmp_py_str);

#endif