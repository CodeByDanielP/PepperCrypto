/* PepperCrypto.h */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;
typedef _BitInt(1024) int128;

struct s_rsa
{
  // p
  // q
  // N
  // phi
  // e
  // d
};
typedef struct s_rsa rsa;

// RSA_methods
void init_rsa(struct s_rsa*);
void rsa_encrypt(struct s_rsa*, int8*);
void rsa_decrypt(struct s_rsa*, int8*);
void rsa_sign(struct s_rsa*, int8*);
void rsa_verify(struct s_rsa*, int8*);
void rsa_cleanup(struct s_rsa*);

// Helper Methods

int main(int,char**);
