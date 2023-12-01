#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

void test_collision(const char *str1, const char *str2)
{
    unsigned long hash1 = hash_djb2((unsigned char *)str1);
    unsigned long hash2 = hash_djb2((unsigned char *)str2);

    if (hash1 == hash2)
        printf("'%s' and '%s' collide.\n", str1, str2);
    else
        printf("'%s' and '%s' do not collide.\n", str1, str2);
}

int main()
{
    test_collision("hetairas", "mentioner");
    test_collision("heliotropes", "neurospora");
    test_collision("depravement", "serafins");
    test_collision("stylist", "subgenera");
    test_collision("joyful", "synaphea");
    test_collision("redescribed", "urites");
    test_collision("dram", "vivency");

    return 0;
}
