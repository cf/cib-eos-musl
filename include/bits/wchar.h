#pragma once

#include <bits/stdint.h>
#include <bits/stddef.h>

#ifndef __cplusplus
typedef __WCHAR_TYPE__ wchar_t;
#endif

// if we support wstring make sure that this is correct
typedef wchar_t wint_t;
#define WEOF wchar_t(-1)

//struct mbstate_t;
