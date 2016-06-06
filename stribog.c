/*
 * Copyright (c) 2013 by sftp
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 *
 * There's ABSOLUTELY NO WARRANTY, express or implied.
 */

#include <stdio.h>
#include <string.h>

#include "types.h"
#include "stribog.h"

void print_hash(struct stribog_ctx_t *ctx)
{
	u8 i;

	for (i = 0; i < (ctx->size ? OUTPUT_SIZE_512 : OUTPUT_SIZE_256); i++)
		printf("%02x", ctx->h[i]);

	putchar('\n');
}

int main(int argc, char *argv[])
{
	struct stribog_ctx_t ctx;

	u8 message0[63] = {
		0x32, 0x31, 0x30, 0x39, 0x38, 0x37, 0x36, 0x35,
		0x34, 0x33, 0x32, 0x31, 0x30, 0x39, 0x38, 0x37,
		0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30, 0x39,
		0x38, 0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31,
		0x30, 0x39, 0x38, 0x37, 0x36, 0x35, 0x34, 0x33,
		0x32, 0x31, 0x30, 0x39, 0x38, 0x37, 0x36, 0x35,
		0x34, 0x33, 0x32, 0x31, 0x30, 0x39, 0x38, 0x37,
		0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30
	};
	
	u8 message1[1] = {
		0x41
	};
	
	u8 message2[1] = {
		0x48
	};
	
	u8 message3[1] = {
		0x271b

	};
	
	u8 message4[1] = {
		0x248
	};
	
	u8 message5[1] = {
		0x2af9
	};
	
	u8 message6[1] = {
		0x40

	};
	
	u8 message7[1] = {
		0x271b
	};
	
	u8 message8[1] = {
		0x277e
	};
	
	u8 message9[1] = {
		0x9

	};
	
	u8 message10[1] = {
		0x240

	};
	
	u8 message11[1] = {
		0x49

	};
	
	u8 message12[1] = {
		0x0

	};
	
	u8 message13[1] = {
		0x271b

	};
	
	u8 message14[1] = {
		0x271a

	};
	
	u8 message15[1] = {
		0x271b

	};
	
	u8 message16[1] = {
		0x48

	};
	
	u8 message17[1] = {
		0x1

	};
	
	u8 message18[1] = {
		0x240
	};
	
	u8 message19[1] = {
		0x2711

	};
	
	u8 message20[1] = {
		0x48
	};

	u8 message22[72] = {
		0xfb, 0xe2, 0xe5, 0xf0, 0xee, 0xe3, 0xc8, 0x20,
		0xfb, 0xea, 0xfa, 0xeb, 0xef, 0x20, 0xff, 0xfb,
		0xf0, 0xe1, 0xe0, 0xf0, 0xf5, 0x20, 0xe0, 0xed,
		0x20, 0xe8, 0xec, 0xe0, 0xeb, 0xe5, 0xf0, 0xf2,
		0xf1, 0x20, 0xff, 0xf0, 0xee, 0xec, 0x20, 0xf1,
		0x20, 0xfa, 0xf2, 0xfe, 0xe5, 0xe2, 0x20, 0x2c,
		0xe8, 0xf6, 0xf3, 0xed, 0xe2, 0x20, 0xe8, 0xe6,
		0xee, 0xe1, 0xe8, 0xf0, 0xf2, 0xd1, 0x20, 0x2c,
		0xe8, 0xf0, 0xf2, 0xe5, 0xe2, 0x20, 0xe5, 0xd1
	};
	

	printf("Message 0:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message1, sizeof(message1));

	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message0, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 1:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message1, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message1, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 2:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message2, sizeof(message1));

	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message2, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 3:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message3, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message3, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 4:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message4, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message4, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);

	printf("Message 5:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message5, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message5, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);

	printf("Message 6:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message6, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message6, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 7:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message7, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message7, sizeof(message1));
	
	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 8:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message8, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message8, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 9:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message9, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message9, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 10:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message10, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message10, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 11:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message11, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message11, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 12:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message12, sizeof(message1));

	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message12, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 13:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message13, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message13, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 14:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message14, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message14, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);

	printf("Message 15:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message15, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message15, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);

	printf("Message 16:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message16, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message16, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 17:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message17, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message17, sizeof(message1));
	
	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 18:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message18, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message18, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 19:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message19, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message19, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);
	
	printf("Message 20:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message20, sizeof(message1));
	
	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message20, sizeof(message1));

	printf("H^{256}: ");
	print_hash(&ctx);

	printf("\nMessage 22:\n");

	init(&ctx, HASH512);
	stribog(&ctx, message22, sizeof(message2));

	printf("H^{512}: ");
	print_hash(&ctx);

	init(&ctx, HASH256);
	stribog(&ctx, message22, sizeof(message2));

	printf("H^{256}: ");
	print_hash(&ctx);

	return 0;
}
