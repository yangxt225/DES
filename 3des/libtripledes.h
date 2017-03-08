/*
* =====================================================================================
 *
 *       Filename:  libtripledes.h
 *
 *    Description:  GuangZhou Metro AFC
 *
 *        Version:  1.0
 *        Created:  
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

/**  libTripleDes: 3Des 对以64位为单位的块数据进行加解密
 @param[out]  结果输出参数
 @param[in]   输入待加解密数据块(8Bytes)
 @param[in]   加解密 密钥(16Bytes)
 @param[in]   类型 加密:1, 解密:0
 @return      无
*/
void libTripleDes( uchar *pOut, uchar *pIn, uchar *pKey, uchar Type );

#ifdef  __cplusplus
}
#endif

#endif
