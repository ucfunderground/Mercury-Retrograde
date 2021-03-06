#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define object void*
#define string char*
#define uint unsigned int

typedef enum facebookResponseTypes {
  IGNORE,
  POST,
  COMMENT,
  REPLY
} FBResponseType;
typedef enum astrologicSymbol {
  CAPRICORN,
  AQUARIUS,
  PISCES,
  ARIES,
  TAURUS,
  GEMINI,
  CANCER,
  LEO,
  VIRGO,
  LIBRA,
  SCORPIO,
  SAGGITARIUS
} AstroSymbol;



#endif
