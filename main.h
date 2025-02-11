/*
 aprs-weather-submit version 1.3.1
 Copyright (c) 2019 Colin Cogle <colin@colincogle.name>
 
 This file, main.h, is part of aprs-weather-submit.
 
 aprs-weather-submit is free software: you can redistribute it and/or
 modify it under the terms of the GNU General Public License as published
 by the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 aprs-weather-submit is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with aprs-weather-submit. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef main_h
#define main_h

/* Program constants. */
#define PROGRAM_NAME "aprs-weather-submit"
#define VERSION      "1.3.1"

/**
 * usage() -- show some help.
 *
 * @author Colin Cogle
 * @since  0.1
 */
void usage(void);

/**
 * help() -- show even more help.
 *
 * @author Colin Cogle
 * @since  0.1
 */
extern void help(void);

/**
 * version() -- show the version.
 *
 * @author Colin Cogle
 * @since  0.1
 */
void version(void);

/* A decent buffer size (plus one). */
#ifndef	BUFSIZE
#define BUFSIZE 1025
#endif

#endif /* main_h */
