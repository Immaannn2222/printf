
printf(3)                                                Library Functions Manual                                                printf(3)

NNAAMMEE
       pprriinnttff

SSYYNNOOPPSSIISS
        #include "holberton.h"

       #include <stdio.h>

       #include <unistd.h>

       #include <stdarg.h>

       iinntt __pprriinnttff((ccoonnsstt cchhaarr**ffoorrmmaatt,,......));;
       iinntt ggeett__ssppeecc__cchhaarr((cchhaarr cc,, vvaa__lliisstt pp));;
       iinntt pprriinntt__cchhaarr((vvaa__lliisstt aarrggss));;
       iinntt pprriinntt__ssttrriinngg((vvaa__lliisstt aarrggss));;
       iinntt pprriinntt__ppeerrcceenntt((vvaa__lliisstt ____aattttrriibbuuttee____((((uunnuusseedd)))) aarrggss));;
       iinntt pprriinn__iinntteeggeerr((vvaa__lliisstt aarrggss));;
       iinntt pprriinntt__bbiinn((vvaa__lliisstt aarrggss));; iinntt pprriinntt__uunnssiigg__iinntt((vvaa__lliisstt aarrggss));;

DDEESSCCRRIIPPTTIIOONN
       the functions in the printf() family produce output according to a format as described below.

CCoonnvveerrssiioonn ssppeecciiffiieerrss
       dd,, ii

       The  int argument is converted to signed decimal notation.  The precision, if any, gives the minimum number of digits that must ap‐
       pear; if the converted value requires fewer digits, it is padded on the left with zeros.  The default precision is 1.   When  0  is
       printed with an explicit precision 0, the output is empty.

       ss

       If  no  l  modifier  is  present: the const char * argument is expected to be a pointer to an array of character type (pointer to a
       string).  Characters from the array are written up to (but not including) a terminating null byte (' '); if a precision  is  speci‐
       fied,  no  more  than the number specified are written.  If a precision is given, no null byte need be present; if the precision is
       not specified, or is greater than the size of the array, the array must contain a terminating null byte.

       cc

       If no l modifier is present, the int argument is converted to an unsigned char, and the resulting character is written.   If  an  l
       modifier  is  present,  the wint_t (wide character) argument is converted to a multibyte sequence by a call to the wcrtomb(3) func‐
       tion, with a conversion state starting in the initial state, and the resulting multibyte string is written.

       %%

       A '%' is written.  No argument is converted.  The complete conversion specification is '%%'.

       oo,, uu,, xx,, XX

        The unsigned int argument is converted to unsigned octal (o), unsigned decimal (u), or unsigned hexadecimal (x and X) nota‐  tion.
       The  letters  abcdef are used for x conversions; the let‐ ters ABCDEF are used for X conversions.  The precision, if any, gives the
       minimum number of digits that must appear; if the converted value requires fewer digits, it is padded on the left with zeros.   The
       default precision is 1.  When 0 is printed with an explicit precision 0, the output is empty.

RREETTUURRNN VVAALLUUEE
       Upon  successful  return,  these  functions  return the number of characters printed (excluding the null byte used to end output to
       strings).

SSEEEE AALLSSOO
       _p_e_e_r_l_e_a_r_n_i_n_g_(_2_)_, _p_r_o_j_e_c_t_b_a_s_e_d_(_2_)_, _f_u_l_l_s_t_a_c_k_(_2_)_, _B_e_t_t_y_(_1_)

BBUUGGSS
       No known bugs.

AAUUTTHHOORR
       Khawla jlassi, Imen ayari

holberton man page                                             16 Mars 2020                                                      printf(3)
