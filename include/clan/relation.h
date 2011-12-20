
   /*+------- <| --------------------------------------------------------**
    **         A                     Clan                                **
    **---     /.\   -----------------------------------------------------**
    **   <|  [""M#                 relation.h                            **
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


#ifndef CLAN_relation_H
# define CLAN_relation_H

# include <osl/relation.h>

# if defined(__cplusplus)
extern "C"
  {
# endif

/*+****************************************************************************
 *                            Processing functions                            *
 ******************************************************************************/
void           clan_relation_tag_array(osl_relation_p, int);
osl_relation_p clan_relation_scattering(int *, int);
void           clan_relation_outputize(osl_relation_p);
void           clan_relation_new_output_vector(osl_relation_p, osl_vector_p);
void           clan_relation_new_output_scalar(osl_relation_p, int);
void           clan_relation_compact(osl_relation_p, int);
osl_relation_p clan_relation_greater(osl_relation_p, osl_relation_p, int);
osl_relation_p clan_relation_negative_relation(osl_relation_p source);
osl_relation_p clan_relation_not(osl_relation_p);
void           clan_relation_and(osl_relation_p, osl_relation_p);
osl_relation_p clan_relation_inverse_unions(osl_relation_p src);
int            clan_relation_existential(osl_relation_p);
osl_relation_p clan_lower_bound_contribution(int, osl_relation_p, int);
 
# if defined(__cplusplus)
  }
# endif
#endif /* define CLAN_relation_H */
