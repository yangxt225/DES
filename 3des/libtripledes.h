/*
* =====================================================================================
 *
 *       Filename:  libtripledes.h
 *
 *    Description:  GuangZhou Metro AFC
 *
 *        Version:  1.0
 *        Created:  2007å¹?2æœ?5æ—?09æ—?3åˆ?5ç§?UTC
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ZhouJian (), zhoujian@revenco.com
 *        Company:  Goldsign
 *
 * =====================================================================================
 */

#ifndef _DES_H_
#define _DES_H_

#ifdef __cplusplus
extern "C" {
#endif

#define uchar unsigned char

void libDes(uchar *source, uchar * inkey, int flg);

void libTripleDes( uchar *pOut, uchar *pIn, uchar *pKey, uchar Type );

#ifdef  __cplusplus
}
#endif

#endif
