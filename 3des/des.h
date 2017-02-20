#ifndef _DES_H_
#define _DES_H_

#ifdef __cplusplus
extern "C" {
#endif

#define uchar unsigned char

void des(uchar *source, uchar * inkey, int flg);

void TripleDes( uchar *pOut, uchar *pIn, uchar *pKey, uchar Type );

#ifdef  __cplusplus
}
#endif

#endif
