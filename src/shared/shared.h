/*
 * Shared functions header file.
 * Copyright (C) 2019 Kittipong Yothaithiang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _SHARED_H_
#define _SHARED_H_

/*
 * nRF52 section.
 */
void conn_params_init(void);
void gap_params_init(void);
void idle_state_handle(void);
void log_init(void);
void power_management_init(void);
void scheduler_init(void);

/*
 * Firmware section.
 */
void pins_init(void);

#endif
