/*
 *   This file is part of MiniGUI, a mature cross-platform windowing 
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 * 
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 * 
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *   Or,
 * 
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 * 
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 * 
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/en/about/licensing-policy/>.
 */

#include "common.h"

#ifdef _MGINCORE_RES

//data of "skin_header.bmp"

unsigned char _mgir_bmp_skin_header_data[]={
	0x42,0x4D,0xF8,0x0F,0x00,0x00,0x00,0x00,	0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,
	0x00,0x00,0x12,0x00,0x00,0x00,0x48,0x00,	0x00,0x00,0x01,0x00,0x18,0x00,0x00,0x00,
	0x00,0x00,0xC2,0x0F,0x00,0x00,0x12,0x0B,	0x00,0x00,0x12,0x0B,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x41,	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,
	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,
	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,
	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,	0x41,0x41,0x41,0x41,0x00,0x00,0x41,0x41,
	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,
	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,
	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,	0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,
	0x41,0x41,0x41,0x41,0x00,0x00,0x42,0x42,	0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,
	0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,	0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,
	0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,	0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,
	0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,	0x42,0x42,0x42,0x42,0x00,0x00,0x43,0x43,
	0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,	0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,
	0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,	0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,
	0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,	0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,
	0x43,0x43,0x43,0x43,0x00,0x00,0x44,0x44,	0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
	0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,	0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
	0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,	0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
	0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,	0x44,0x44,0x44,0x44,0x00,0x00,0x45,0x45,
	0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,	0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,
	0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,	0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,
	0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,	0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,
	0x45,0x45,0x45,0x45,0x00,0x00,0x46,0x46,	0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,
	0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,	0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,
	0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,	0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,
	0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,	0x46,0x46,0x46,0x46,0x00,0x00,0x47,0x47,
	0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,	0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,
	0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,	0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,
	0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,	0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,
	0x47,0x47,0x47,0x47,0x00,0x00,0x49,0x49,	0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,
	0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,	0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,
	0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,	0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,
	0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,	0x49,0x49,0x49,0x49,0x00,0x00,0x51,0x51,
	0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,	0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,
	0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,	0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,
	0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,	0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,
	0x51,0x51,0x51,0x51,0x00,0x00,0x53,0x53,	0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,
	0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,	0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,
	0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,	0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,
	0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,	0x53,0x53,0x53,0x53,0x00,0x00,0x55,0x55,
	0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,	0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
	0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,	0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
	0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,	0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
	0x55,0x55,0x55,0x55,0x00,0x00,0x57,0x57,	0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,
	0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,	0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,
	0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,	0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,
	0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,	0x57,0x57,0x57,0x57,0x00,0x00,0x59,0x59,
	0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,	0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,
	0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,	0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,
	0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,	0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,
	0x59,0x59,0x59,0x59,0x00,0x00,0x5B,0x5B,	0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,
	0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,	0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,
	0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,	0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,
	0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,	0x5B,0x5B,0x5B,0x5B,0x00,0x00,0x5C,0x5C,
	0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,	0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,
	0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,	0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,
	0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,	0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,
	0x5C,0x5C,0x5C,0x5C,0x00,0x00,0x5D,0x5D,	0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,
	0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,	0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,
	0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,	0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,
	0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,	0x5D,0x5D,0x5D,0x5D,0x00,0x00,0x5F,0x5F,
	0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,	0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,
	0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,	0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,
	0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,	0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,
	0x5F,0x5F,0x5F,0x5F,0x00,0x00,0x65,0x65,	0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,
	0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,	0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,
	0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,	0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,
	0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,	0x65,0x65,0x65,0x65,0x00,0x00,0x66,0x66,
	0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,	0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
	0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,	0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
	0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,	0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
	0x66,0x66,0x66,0x66,0x00,0x00,0x67,0x67,	0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,
	0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,	0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,
	0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,	0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,
	0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,	0x67,0x67,0x67,0x67,0x00,0x00,0x68,0x68,
	0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,	0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,
	0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,	0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,
	0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,	0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,
	0x68,0x68,0x68,0x68,0x00,0x00,0x6A,0x6A,	0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,
	0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,	0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,
	0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,	0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,
	0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,	0x6A,0x6A,0x6A,0x6A,0x00,0x00,0x6C,0x6C,
	0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,	0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,
	0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,	0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,
	0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,	0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,
	0x6C,0x6C,0x6C,0x6C,0x00,0x00,0x6E,0x6E,	0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,
	0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,	0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,
	0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,	0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,
	0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,	0x6E,0x6E,0x6E,0x6E,0x00,0x00,0x6F,0x6F,
	0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,	0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,
	0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,	0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,
	0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,	0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,
	0x6F,0x6F,0x6F,0x6F,0x00,0x00,0x72,0x72,	0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,
	0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,	0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,
	0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,	0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,
	0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,	0x72,0x72,0x72,0x72,0x00,0x00,0x7F,0x7F,
	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
	0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x82,0x82,	0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,
	0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,	0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,
	0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,	0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,
	0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,	0x82,0x82,0x82,0x82,0x00,0x00,0x85,0x85,
	0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,	0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,
	0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,	0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,
	0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,	0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,
	0x85,0x85,0x85,0x85,0x00,0x00,0x88,0x88,	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,
	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,
	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,
	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,	0x88,0x88,0x88,0x88,0x00,0x00,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x00,0x00,0x8D,0x8D,	0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,
	0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,	0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,
	0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,	0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,
	0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,	0x8D,0x8D,0x8D,0x8D,0x00,0x00,0x8F,0x8F,
	0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,	0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,
	0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,	0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,
	0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,	0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,
	0x8F,0x8F,0x8F,0x8F,0x00,0x00,0x92,0x92,	0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,
	0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,	0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,
	0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,	0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,
	0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,	0x92,0x92,0x92,0x92,0x00,0x00,0x94,0x94,
	0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,	0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,
	0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,	0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,
	0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,	0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,
	0x94,0x94,0x94,0x94,0x00,0x00,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x00,0x00,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,	0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,
	0x8B,0x8B,0x8B,0x8B,0x00,0x00,0x8C,0x8C,	0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,
	0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,	0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,
	0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,	0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,
	0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,	0x8C,0x8C,0x8C,0x8C,0x00,0x00,0x8E,0x8E,
	0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,	0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,
	0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,	0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,
	0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,	0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,
	0x8E,0x8E,0x8E,0x8E,0x00,0x00,0x90,0x90,	0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,
	0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,	0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,
	0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,	0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,
	0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,	0x90,0x90,0x90,0x90,0x00,0x00,0x91,0x91,
	0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,	0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,
	0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,	0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,
	0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,	0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,
	0x91,0x91,0x91,0x91,0x00,0x00,0x93,0x93,	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,
	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,
	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,
	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,	0x93,0x93,0x93,0x93,0x00,0x00,0x95,0x95,
	0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,	0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,
	0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,	0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,
	0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,	0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,
	0x95,0x95,0x95,0x95,0x00,0x00,0x97,0x97,	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,
	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,
	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,
	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,	0x97,0x97,0x97,0x97,0x00,0x00,0xA4,0xA4,
	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,
	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,
	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,
	0xA4,0xA4,0xA4,0xA4,0x00,0x00,0xA7,0xA7,	0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,
	0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,	0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,
	0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,	0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,
	0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,	0xA7,0xA7,0xA7,0xA7,0x00,0x00,0xAA,0xAA,
	0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,	0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
	0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,	0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
	0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,	0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
	0xAA,0xAA,0xAA,0xAA,0x00,0x00,0xAD,0xAD,	0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,
	0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,	0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,
	0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,	0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,
	0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,	0xAD,0xAD,0xAD,0xAD,0x00,0x00,0xB0,0xB0,
	0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,	0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,
	0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,	0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,
	0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,	0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,
	0xB0,0xB0,0xB0,0xB0,0x00,0x00,0xB2,0xB2,	0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,
	0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,	0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,
	0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,	0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,
	0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,	0xB2,0xB2,0xB2,0xB2,0x00,0x00,0xB4,0xB4,
	0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,	0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,
	0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,	0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,
	0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,	0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,
	0xB4,0xB4,0xB4,0xB4,0x00,0x00,0xB6,0xB6,	0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,
	0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,	0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,
	0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,	0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,
	0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,	0xB6,0xB6,0xB6,0xB6,0x00,0x00,0xB8,0xB8,
	0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,	0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,
	0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,	0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,
	0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,	0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,
	0xB8,0xB8,0xB8,0xB8,0x00,0x00,0x75,0x75,	0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,
	0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,	0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,
	0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,	0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,
	0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,	0x75,0x75,0x75,0x75,0x00,0x00,0x76,0x76,
	0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,	0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,
	0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,	0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,
	0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,	0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,
	0x76,0x76,0x76,0x76,0x00,0x00,0x77,0x77,	0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
	0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,	0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
	0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,	0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
	0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,	0x77,0x77,0x77,0x77,0x00,0x00,0x79,0x79,
	0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,	0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,
	0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,	0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,
	0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,	0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,
	0x79,0x79,0x79,0x79,0x00,0x00,0x7B,0x7B,	0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,
	0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,	0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,
	0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,	0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,
	0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,	0x7B,0x7B,0x7B,0x7B,0x00,0x00,0x7D,0x7D,
	0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,	0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,
	0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,	0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,
	0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,	0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,
	0x7D,0x7D,0x7D,0x7D,0x00,0x00,0x7F,0x7F,	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
	0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,	0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x81,0x81,
	0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,	0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,
	0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,	0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,
	0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,	0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,
	0x81,0x81,0x81,0x81,0x00,0x00,0x84,0x84,	0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,
	0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,	0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,
	0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,	0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,
	0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,	0x84,0x84,0x84,0x84,0x00,0x00,0x93,0x93,
	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,
	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,
	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,	0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,
	0x93,0x93,0x93,0x93,0x00,0x00,0x97,0x97,	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,
	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,
	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,
	0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,	0x97,0x97,0x97,0x97,0x00,0x00,0x9A,0x9A,
	0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,	0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,
	0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,	0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,
	0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,	0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,
	0x9A,0x9A,0x9A,0x9A,0x00,0x00,0x9E,0x9E,	0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
	0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,	0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
	0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,	0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
	0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,	0x9E,0x9E,0x9E,0x9E,0x00,0x00,0xA1,0xA1,
	0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,	0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,
	0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,	0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,
	0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,	0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,
	0xA1,0xA1,0xA1,0xA1,0x00,0x00,0xA4,0xA4,	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,
	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,
	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,
	0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,	0xA4,0xA4,0xA4,0xA4,0x00,0x00,0xA6,0xA6,
	0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,	0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,
	0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,	0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,
	0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,	0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,
	0xA6,0xA6,0xA6,0xA6,0x00,0x00,0xA9,0xA9,	0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,
	0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,	0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,
	0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,	0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,
	0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,	0xA9,0xA9,0xA9,0xA9,0x00,0x00,0xAB,0xAB,
	0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,	0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,
	0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,	0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,
	0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,	0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,
	0xAB,0xAB,0xAB,0xAB,0x00,0x00,0x00,0x00
};
#endif //_MGINCORE_RES

