/*************************************************************************/
/*                                                                       */
/*                  Language Technologies Institute                      */
/*                     Carnegie Mellon University                        */
/*                      Copyright (c) 2001-2009                          */
/*                        All Rights Reserved.                           */
/*                                                                       */
/*  Permission is hereby granted, free of charge, to use and distribute  */
/*  this software and its documentation without restriction, including   */
/*  without limitation the rights to use, copy, modify, merge, publish,  */
/*  distribute, sublicense, and/or sell copies of this work, and to      */
/*  permit persons to whom this work is furnished to do so, subject to   */
/*  the following conditions:                                            */
/*   1. The code must retain the above copyright notice, this list of    */
/*      conditions and the following disclaimer.                         */
/*   2. Any modifications must be clearly marked as such.                */
/*   3. Original authors' names are not deleted.                         */
/*   4. The authors' names are not used to endorse or promote products   */
/*      derived from this software without specific prior written        */
/*      permission.                                                      */
/*                                                                       */
/*  CARNEGIE MELLON UNIVERSITY AND THE CONTRIBUTORS TO THIS WORK         */
/*  DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING      */
/*  ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT   */
/*  SHALL CARNEGIE MELLON UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE      */
/*  FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES    */
/*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   */
/*  AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,          */
/*  ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF       */
/*  THIS SOFTWARE.                                                       */
/*                                                                       */
/*************************************************************************/
/*                                                                       */
/*  Pashtu arabic script normalization                                   */
/*                                                                       */
/*************************************************************************/

static const struct cst_fbmap_struct {
    const char *x;
    const char *y;
} ps_fbmap[] = 
    {
        { "ﺍ", "ا" },
        { "ﺺ", "ص" },
        { "ﺎ", "ا" },
        { "ﺏ", "ب" },
        { "ﺐ", "ب" },
        { "ﺑ", "ب" },
        { "ﺕ", "ت" },
        { "ﺖ", "ت" },
        { "ﺗ", "ت" },
        { "ﺘ", "ت" },
        { "ﺡ", "ح" },
        { "ﺢ", "ح" },
        { "ﺣ", "ح" },
        { "ﺥ", "خ" },
        { "ﺩ", "د" },
        { "ﺪ", "د" },
        { "ﺭ", "ر" },
        { "ﺯ", "ز" },
        { "ﺱ", "س" },
        { "ﺲ", "س" },
        { "ﺳ", "س" },
        { "ﺴ", "س" },
        { "ﺵ", "ش" },
        { "ﺶ", "ش" },
        { "ﺷ", "ش" },
        { "ﺺ", "ص" },
        { "ﺻ", "ص" },
        { "ﻀ", "ض" },
        { "ﻁ", "ط" },
        { "ﻇ", "ظ" },
        { "ﻊ", "ع" },
        { "ﻋ", "ع" },
        { "ﻌ", "ع" },
        { "ﻔ", "ف" },
        { "ﻘ", "ق" },
        { "ﻟ", "ل" },
        { "ﻠ", "ل" },
        { "ﻡ", "م" },
        { "ﻣ", "م" },
        { "ﻤ", "م" },
        { "ﻥ", "ن" },
        { "ﻨ", "ن" },
        { "ﻩ", "ه" },
        { "ﻪ", "ه" },
        { "ﻫ", "ه" },
        { "ﻭ", "و" },
        { "ﻮ", "و" },
        /*        { "ﻻ", "ل", "ا" }, */
        /* { "ﻼ", "ل", "ا" }, */

        { "أ", "ا" },
        { "ك", "ق" },
        { "ى", "ئ" },
        { "ي", "ئ" },
        { "﻿", 0 },
        
        { 0, 0 }
    };

