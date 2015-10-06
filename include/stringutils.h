/* 
 * File:   stringutils.h
 * Author: weizhengtian
 *
 * Created on 2015年10月6日, 下午8:59
 */

#ifndef STRINGUTILS_H
#define	STRINGUTILS_H

#ifdef	__cplusplus
extern "C" {
#endif
    
int StrCmp(char * s1, char * s2);
int StrCat(char * s1, char * s2);
int StrLen(char * s1);
void StrReplace(char * s1, char * s2);
void StrNCpy(char * s1, char * s2, int n);
void MemNCpy(void * s1, void * s2, int n);




#ifdef	__cplusplus
}
#endif

#endif	/* STRINGUTILS_H */

