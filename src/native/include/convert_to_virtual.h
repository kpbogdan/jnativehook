/* JNativeHook: Global keyboard and mouse hooking for Java.
 * Copyright (C) 2006-2012 Alexander Barker.  All Rights Received.
 * http://code.google.com/p/jnativehook/
 *
 * JNativeHook is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JNativeHook is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _included_convert_to_virtual
#define _included_convert_to_virtual

/* Converts the native key symbol to the virtual key code and keyboard location.
 * The raw code is the platform specific key code. 
 */
extern unsigned int convert_to_virtual_key(unsigned int native_keycode);

// Converts the native button code to its virtual counterpart.
extern unsigned short int convert_to_virtual_button(unsigned short int native_button);

// Converts the native modifier mask code to its virtual counterpart.
extern unsigned int convert_to_virtual_mask(unsigned int native_mask);

#endif
