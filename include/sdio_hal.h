/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *                                        
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __SDIO_HAL_H__
#define __SDIO_HAL_H__


extern u8 sd_hal_bus_init(struct adapter *padapter);
extern u8 sd_hal_bus_deinit(struct adapter *padapter);

u8 sd_int_isr(struct adapter *padapter);
void sd_int_dpc(struct adapter *padapter);

void rtl8188es_set_hal_ops(struct adapter *padapter);
#define hal_set_hal_ops rtl8188es_set_hal_ops

#endif //__SDIO_HAL_H__

