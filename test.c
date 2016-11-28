#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "sha256.h"

int main( ){

	char* input  = "BA7816BF8F01CFEA414140DE5DAE2223B00361A396177A9CB410FF61F20015AD";
	char* output = "4f671028986fea052075ff8c08fc1a0e7741cc60da6607bf0a8f8882465e79af";

	sha256hash_t result = sha256sum((unsigned char*)input);
	unsigned char* result_str = sha256_to_string(result);
	printf("Result: %s\n", !strcmp(output, (char*)result_str) ? "SUCCESS":"FAILURE");

	return 0;
}
