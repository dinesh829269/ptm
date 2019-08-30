#ifndef bitphantom_CRYPTO_POW_LYRA2RE_H
#define bitphantom_CRYPTO_POW_LYRA2RE_H

#ifdef __cplusplus
extern "C" {
#endif

void lyra2re_hash(const char* input, char* output);
void lyra2re2_hash(const char* input, char* output);

#ifdef __cplusplus
}
#endif

#endif // bitphantom_CRYPTO_POW_LYRA2RE_H
