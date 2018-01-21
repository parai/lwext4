/*
 * File      : dfs_ext.h
 * This file is part of Device File System in RT-Thread RTOS
 * COPYRIGHT (C) 2004-2017, RT-Thread Development Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017-11-11     parai@foxmail.com base porting
 */

#ifndef __DFS_EXT_H__
#define __DFS_EXT_H__

#include <rtthread.h>

#ifndef RT_DFS_EXT_DRIVES
#define RT_DFS_EXT_DRIVES 4
#endif

int dfs_ext_init(void);

#endif
