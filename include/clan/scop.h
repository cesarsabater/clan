
   /*+------- <| --------------------------------------------------------**
    **         A                     Clan                                **
    **---     /.\   -----------------------------------------------------**
    **   <|  [""M#                  scop.h                               **
    **-   A   | #   -----------------------------------------------------**
    **   /.\ [""M#         First version: 30/04/2008                     **
    **- [""M# | #  U"U#U  -----------------------------------------------**
         | #  | #  \ .:/
         | #  | #___| #
 ******  | "--'     .-"  ******************************************************
 *     |"-"-"-"-"-#-#-##   Clan : the Chunky Loop Analyzer (experimental)     *
 ****  |     # ## ######  *****************************************************
 *      \       .::::'/                                                       *
 *       \      ::::'/     Copyright (C) 2008 University Paris-Sud 11         *
 *     :8a|    # # ##                                                         *
 *     ::88a      ###      This is free software; you can redistribute it     *
 *    ::::888a  8a ##::.   and/or modify it under the terms of the GNU Lesser *
 *  ::::::::888a88a[]:::   General Public License as published by the Free    *
 *::8:::::::::SUNDOGa8a::. Software Foundation, either version 2.1 of the     *
 *::::::::8::::888:Y8888:: License, or (at your option) any later version.    *
 *::::':::88::::888::Y88a::::::::::::...                                      *
 *::'::..    .   .....   ..   ...  .                                          *
 * This software is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY *
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License   *
 * for more details.							      *
 *                                                                            *
 * You should have received a copy of the GNU Lesser General Public License   *
 * along with software; if not, write to the Free Software Foundation, Inc.,  *
 * 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA                     *
 *                                                                            *
 * Clan, the Chunky Loop Analyzer                                             *
 * Written by Cedric Bastoul, Cedric.Bastoul@u-psud.fr                        *
 *                                                                            *
 ******************************************************************************/


#ifndef CLAN_SCOP_H
# define CLAN_SCOP_H

# include <stdio.h>
# include <osl/scop.h>
# include <clan/options.h>

# if defined(__cplusplus)
extern "C"
  {
# endif


/*+****************************************************************************
 *                            Processing functions                            *
 ******************************************************************************/
osl_scop_p clan_scop_extract(FILE *, clan_options_p);
void       clan_scop_compact(osl_scop_p);
void       clan_scop_print(FILE *, osl_scop_p, clan_options_p);
void       clan_scop_generate_scatnames(osl_scop_p);
void       clan_scop_generate_coordinates(osl_scop_p, char *);
void       clan_scop_generate_clay(osl_scop_p, char *);
void       clan_scop_fill_options(osl_scop_p, int*, int*);
void       clan_scop_update_coordinates(osl_scop_p, int (*)[CLAN_MAX_SCOPS]);
void       clan_scop_print_autopragma(FILE *, int, int (*)[CLAN_MAX_SCOPS]);
void       clan_scop_simplify(osl_scop_p scop);


# if defined(__cplusplus)
  }
# endif
#endif /* define CLAN_SCOP_H */
