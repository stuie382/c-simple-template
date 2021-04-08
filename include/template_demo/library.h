#pragma once
// If the project gets compiled as C++, this will prevent namespace mangling.
#ifdef __cplusplus
extern "C" {
#endif

/**
 * Say hello to the world!
 */
char *hello(void);

#ifdef __cplusplus
}
#endif
