#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define string char*

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
