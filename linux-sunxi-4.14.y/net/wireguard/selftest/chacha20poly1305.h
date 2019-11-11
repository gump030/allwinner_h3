/* Copyright (C) 2015-2017 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved. */

#ifdef DEBUG
/* ChaCha20-Poly1305 AEAD test vectors from RFC7539 2.8.2 */
struct chacha20poly1305_testvec {
	u8 *key, *nonce, *assoc, *input, *result;
	size_t alen, ilen;
};
static const struct chacha20poly1305_testvec chacha20poly1305_enc_vectors[] __initconst = { {
	.key	= "\x1c\x92\x40\xa5\xeb\x55\xd3\x8a\xf3\x33\x88\x86\x04\xf6\xb5\xf0\x47\x39\x17\xc1\x40\x2b\x80\x09\x9d\xca\x5c\xbc\x20\x70\x75\xc0",
	.nonce	= "\x01\x02\x03\x04\x05\x06\x07\x08",
	.assoc	= "\xf3\x33\x88\x86\x00\x00\x00\x00\x00\x00\x4e\x91",
	.alen	= 12,
	.input	= "\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x72\x65\x20\x64\x72\x61\x66\x74\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x20\x61\x20\x6d\x61\x78\x69\x6d\x75\x6d\x20\x6f\x66\x20\x73\x69\x78\x20\x6d\x6f\x6e\x74\x68\x73\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x62\x65\x20\x75\x70\x64\x61\x74\x65\x64\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x64\x2c\x20\x6f\x72\x20\x6f\x62\x73\x6f\x6c\x65\x74\x65\x64\x20\x62\x79\x20\x6f\x74\x68\x65\x72\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x61\x74\x20\x61\x6e\x79\x20\x74\x69\x6d\x65\x2e\x20\x49\x74\x20\x69\x73\x20\x69\x6e\x61\x70\x70\x72\x6f\x70\x72\x69\x61\x74\x65\x20\x74\x6f\x20\x75\x73\x65\x20\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x6d\x61\x74\x65\x72\x69\x61\x6c\x20\x6f\x72\x20\x74\x6f\x20\x63\x69\x74\x65\x20\x74\x68\x65\x6d\x20\x6f\x74\x68\x65\x72\x20\x74\x68\x61\x6e\x20\x61\x73\x20\x2f\xe2\x80\x9c\x77\x6f\x72\x6b\x20\x69\x6e\x20\x70\x72\x6f\x67\x72\x65\x73\x73\x2e\x2f\xe2\x80\x9d",
	.ilen	= 265,
	.result	= "\x64\xa0\x86\x15\x75\x86\x1a\xf4\x60\xf0\x62\xc7\x9b\xe6\x43\xbd\x5e\x80\x5c\xfd\x34\x5c\xf3\x89\xf1\x08\x67\x0a\xc7\x6c\x8c\xb2\x4c\x6c\xfc\x18\x75\x5d\x43\xee\xa0\x9e\xe9\x4e\x38\x2d\x26\xb0\xbd\xb7\xb7\x3c\x32\x1b\x01\x00\xd4\xf0\x3b\x7f\x35\x58\x94\xcf\x33\x2f\x83\x0e\x71\x0b\x97\xce\x98\xc8\xa8\x4a\xbd\x0b\x94\x81\x14\xad\x17\x6e\x00\x8d\x33\xbd\x60\xf9\x82\xb1\xff\x37\xc8\x55\x97\x97\xa0\x6e\xf4\xf0\xef\x61\xc1\x86\x32\x4e\x2b\x35\x06\x38\x36\x06\x90\x7b\x6a\x7c\x02\xb0\xf9\xf6\x15\x7b\x53\xc8\x67\xe4\xb9\x16\x6c\x76\x7b\x80\x4d\x46\xa5\x9b\x52\x16\xcd\xe7\xa4\xe9\x90\x40\xc5\xa4\x04\x33\x22\x5e\xe2\x82\xa1\xb0\xa0\x6c\x52\x3e\xaf\x45\x34\xd7\xf8\x3f\xa1\x15\x5b\x00\x47\x71\x8c\xbc\x54\x6a\x0d\x07\x2b\x04\xb3\x56\x4e\xea\x1b\x42\x22\x73\xf5\x48\x27\x1a\x0b\xb2\x31\x60\x53\xfa\x76\x99\x19\x55\xeb\xd6\x31\x59\x43\x4e\xce\xbb\x4e\x46\x6d\xae\x5a\x10\x73\xa6\x72\x76\x27\x09\x7a\x10\x49\xe6\x17\xd9\x1d\x36\x10\x94\xfa\x68\xf0\xff\x77\x98\x71\x30\x30\x5b\xea\xba\x2e\xda\x04\xdf\x99\x7b\x71\x4d\x6c\x6f\x2c\x29\xa6\xad\x5c\xb4\x02\x2b\x02\x70\x9b\xee\xad\x9d\x67\x89\x0c\xbb\x22\x39\x23\x36\xfe\xa1\x85\x1f\x38"
} };
static const struct chacha20poly1305_testvec chacha20poly1305_dec_vectors[] __initconst = {	{
	.key	= "\x1c\x92\x40\xa5\xeb\x55\xd3\x8a\xf3\x33\x88\x86\x04\xf6\xb5\xf0\x47\x39\x17\xc1\x40\x2b\x80\x09\x9d\xca\x5c\xbc\x20\x70\x75\xc0",
	.nonce	= "\x01\x02\x03\x04\x05\x06\x07\x08",
	.assoc	= "\xf3\x33\x88\x86\x00\x00\x00\x00\x00\x00\x4e\x91",
	.alen	= 12,
	.input	= "\x64\xa0\x86\x15\x75\x86\x1a\xf4\x60\xf0\x62\xc7\x9b\xe6\x43\xbd\x5e\x80\x5c\xfd\x34\x5c\xf3\x89\xf1\x08\x67\x0a\xc7\x6c\x8c\xb2\x4c\x6c\xfc\x18\x75\x5d\x43\xee\xa0\x9e\xe9\x4e\x38\x2d\x26\xb0\xbd\xb7\xb7\x3c\x32\x1b\x01\x00\xd4\xf0\x3b\x7f\x35\x58\x94\xcf\x33\x2f\x83\x0e\x71\x0b\x97\xce\x98\xc8\xa8\x4a\xbd\x0b\x94\x81\x14\xad\x17\x6e\x00\x8d\x33\xbd\x60\xf9\x82\xb1\xff\x37\xc8\x55\x97\x97\xa0\x6e\xf4\xf0\xef\x61\xc1\x86\x32\x4e\x2b\x35\x06\x38\x36\x06\x90\x7b\x6a\x7c\x02\xb0\xf9\xf6\x15\x7b\x53\xc8\x67\xe4\xb9\x16\x6c\x76\x7b\x80\x4d\x46\xa5\x9b\x52\x16\xcd\xe7\xa4\xe9\x90\x40\xc5\xa4\x04\x33\x22\x5e\xe2\x82\xa1\xb0\xa0\x6c\x52\x3e\xaf\x45\x34\xd7\xf8\x3f\xa1\x15\x5b\x00\x47\x71\x8c\xbc\x54\x6a\x0d\x07\x2b\x04\xb3\x56\x4e\xea\x1b\x42\x22\x73\xf5\x48\x27\x1a\x0b\xb2\x31\x60\x53\xfa\x76\x99\x19\x55\xeb\xd6\x31\x59\x43\x4e\xce\xbb\x4e\x46\x6d\xae\x5a\x10\x73\xa6\x72\x76\x27\x09\x7a\x10\x49\xe6\x17\xd9\x1d\x36\x10\x94\xfa\x68\xf0\xff\x77\x98\x71\x30\x30\x5b\xea\xba\x2e\xda\x04\xdf\x99\x7b\x71\x4d\x6c\x6f\x2c\x29\xa6\xad\x5c\xb4\x02\x2b\x02\x70\x9b\xee\xad\x9d\x67\x89\x0c\xbb\x22\x39\x23\x36\xfe\xa1\x85\x1f\x38",
	.ilen	= 281,
	.result	= "\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x72\x65\x20\x64\x72\x61\x66\x74\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x20\x61\x20\x6d\x61\x78\x69\x6d\x75\x6d\x20\x6f\x66\x20\x73\x69\x78\x20\x6d\x6f\x6e\x74\x68\x73\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x62\x65\x20\x75\x70\x64\x61\x74\x65\x64\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x64\x2c\x20\x6f\x72\x20\x6f\x62\x73\x6f\x6c\x65\x74\x65\x64\x20\x62\x79\x20\x6f\x74\x68\x65\x72\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x61\x74\x20\x61\x6e\x79\x20\x74\x69\x6d\x65\x2e\x20\x49\x74\x20\x69\x73\x20\x69\x6e\x61\x70\x70\x72\x6f\x70\x72\x69\x61\x74\x65\x20\x74\x6f\x20\x75\x73\x65\x20\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x6d\x61\x74\x65\x72\x69\x61\x6c\x20\x6f\x72\x20\x74\x6f\x20\x63\x69\x74\x65\x20\x74\x68\x65\x6d\x20\x6f\x74\x68\x65\x72\x20\x74\x68\x61\x6e\x20\x61\x73\x20\x2f\xe2\x80\x9c\x77\x6f\x72\x6b\x20\x69\x6e\x20\x70\x72\x6f\x67\x72\x65\x73\x73\x2e\x2f\xe2\x80\x9d"
} };

static const struct chacha20poly1305_testvec xchacha20poly1305_enc_vectors[] __initconst = { {
	.key	= "\x1c\x92\x40\xa5\xeb\x55\xd3\x8a\xf3\x33\x88\x86\x04\xf6\xb5\xf0\x47\x39\x17\xc1\x40\x2b\x80\x09\x9d\xca\x5c\xbc\x20\x70\x75\xc0",
	.nonce	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17",
	.assoc	= "\xf3\x33\x88\x86\x00\x00\x00\x00\x00\x00\x4e\x91",
	.alen	= 12,
	.input	= "\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x72\x65\x20\x64\x72\x61\x66\x74\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x20\x61\x20\x6d\x61\x78\x69\x6d\x75\x6d\x20\x6f\x66\x20\x73\x69\x78\x20\x6d\x6f\x6e\x74\x68\x73\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x62\x65\x20\x75\x70\x64\x61\x74\x65\x64\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x64\x2c\x20\x6f\x72\x20\x6f\x62\x73\x6f\x6c\x65\x74\x65\x64\x20\x62\x79\x20\x6f\x74\x68\x65\x72\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x61\x74\x20\x61\x6e\x79\x20\x74\x69\x6d\x65\x2e\x20\x49\x74\x20\x69\x73\x20\x69\x6e\x61\x70\x70\x72\x6f\x70\x72\x69\x61\x74\x65\x20\x74\x6f\x20\x75\x73\x65\x20\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x6d\x61\x74\x65\x72\x69\x61\x6c\x20\x6f\x72\x20\x74\x6f\x20\x63\x69\x74\x65\x20\x74\x68\x65\x6d\x20\x6f\x74\x68\x65\x72\x20\x74\x68\x61\x6e\x20\x61\x73\x20\x2f\xe2\x80\x9c\x77\x6f\x72\x6b\x20\x69\x6e\x20\x70\x72\x6f\x67\x72\x65\x73\x73\x2e\x2f\xe2\x80\x9d",
	.ilen	= 265,
	.result	= "\x1a\x6e\x3a\xd9\xfd\x41\x3f\x77\x54\x72\x0a\x70\x9a\xa0\x29\x92\x2e\xed\x93\xcf\x0f\x71\x88\x18\x7a\x9d\x2d\x24\xe0\xf5\xea\x3d\x55\x64\xd7\xad\x2a\x1a\x1f\x7e\x86\x6d\xb0\xce\x80\x41\x72\x86\x26\xee\x84\xd7\xef\x82\x9e\xe2\x60\x9d\x5a\xfc\xf0\xe4\x19\x85\xea\x09\xc6\xfb\xb3\xa9\x50\x09\xec\x5e\x11\x90\xa1\xc5\x4e\x49\xef\x50\xd8\x8f\xe0\x78\xd7\xfd\xb9\x3b\xc9\xf2\x91\xc8\x25\xc8\xa7\x63\x60\xce\x10\xcd\xc6\x7f\xf8\x16\xf8\xe1\x0a\xd9\xde\x79\x50\x33\xf2\x16\x0f\x17\xba\xb8\x5d\xd8\xdf\x4e\x51\xa8\x39\xd0\x85\xca\x46\x6a\x10\xa7\xa3\x88\xef\x79\xb9\xf8\x24\xf3\xe0\x71\x7b\x76\x28\x46\x3a\x3a\x1b\x91\xb6\xd4\x3e\x23\xe5\x44\x15\xbf\x60\x43\x9d\xa4\xbb\xd5\x5f\x89\xeb\xef\x8e\xfd\xdd\xb4\x0d\x46\xf0\x69\x23\x63\xae\x94\xf5\x5e\xa5\xad\x13\x1c\x41\x76\xe6\x90\xd6\x6d\xa2\x8f\x97\x4c\xa8\x0b\xcf\x8d\x43\x2b\x9c\x9b\xc5\x58\xa5\xb6\x95\x9a\xbf\x81\xc6\x54\xc9\x66\x0c\xe5\x4f\x6a\x53\xa1\xe5\x0c\xba\x31\xde\x34\x64\x73\x8a\x3b\xbd\x92\x01\xdb\x71\x69\xf3\x58\x99\xbc\xd1\xcb\x4a\x05\xe2\x58\x9c\x25\x17\xcd\xdc\x83\xb7\xff\xfb\x09\x61\xad\xbf\x13\x5b\x5e\xed\x46\x82\x6f\x22\xd8\x93\xa6\x85\x5b\x40\x39\x5c\xc5\x9c"
} };
static const struct chacha20poly1305_testvec xchacha20poly1305_dec_vectors[] __initconst = {	{
	.key	= "\x1c\x92\x40\xa5\xeb\x55\xd3\x8a\xf3\x33\x88\x86\x04\xf6\xb5\xf0\x47\x39\x17\xc1\x40\x2b\x80\x09\x9d\xca\x5c\xbc\x20\x70\x75\xc0",
	.nonce	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17",
	.assoc	= "\xf3\x33\x88\x86\x00\x00\x00\x00\x00\x00\x4e\x91",
	.alen	= 12,
	.input	= "\x1a\x6e\x3a\xd9\xfd\x41\x3f\x77\x54\x72\x0a\x70\x9a\xa0\x29\x92\x2e\xed\x93\xcf\x0f\x71\x88\x18\x7a\x9d\x2d\x24\xe0\xf5\xea\x3d\x55\x64\xd7\xad\x2a\x1a\x1f\x7e\x86\x6d\xb0\xce\x80\x41\x72\x86\x26\xee\x84\xd7\xef\x82\x9e\xe2\x60\x9d\x5a\xfc\xf0\xe4\x19\x85\xea\x09\xc6\xfb\xb3\xa9\x50\x09\xec\x5e\x11\x90\xa1\xc5\x4e\x49\xef\x50\xd8\x8f\xe0\x78\xd7\xfd\xb9\x3b\xc9\xf2\x91\xc8\x25\xc8\xa7\x63\x60\xce\x10\xcd\xc6\x7f\xf8\x16\xf8\xe1\x0a\xd9\xde\x79\x50\x33\xf2\x16\x0f\x17\xba\xb8\x5d\xd8\xdf\x4e\x51\xa8\x39\xd0\x85\xca\x46\x6a\x10\xa7\xa3\x88\xef\x79\xb9\xf8\x24\xf3\xe0\x71\x7b\x76\x28\x46\x3a\x3a\x1b\x91\xb6\xd4\x3e\x23\xe5\x44\x15\xbf\x60\x43\x9d\xa4\xbb\xd5\x5f\x89\xeb\xef\x8e\xfd\xdd\xb4\x0d\x46\xf0\x69\x23\x63\xae\x94\xf5\x5e\xa5\xad\x13\x1c\x41\x76\xe6\x90\xd6\x6d\xa2\x8f\x97\x4c\xa8\x0b\xcf\x8d\x43\x2b\x9c\x9b\xc5\x58\xa5\xb6\x95\x9a\xbf\x81\xc6\x54\xc9\x66\x0c\xe5\x4f\x6a\x53\xa1\xe5\x0c\xba\x31\xde\x34\x64\x73\x8a\x3b\xbd\x92\x01\xdb\x71\x69\xf3\x58\x99\xbc\xd1\xcb\x4a\x05\xe2\x58\x9c\x25\x17\xcd\xdc\x83\xb7\xff\xfb\x09\x61\xad\xbf\x13\x5b\x5e\xed\x46\x82\x6f\x22\xd8\x93\xa6\x85\x5b\x40\x39\x5c\xc5\x9c",
	.ilen	= 281,
	.result	= "\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x72\x65\x20\x64\x72\x61\x66\x74\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x20\x61\x20\x6d\x61\x78\x69\x6d\x75\x6d\x20\x6f\x66\x20\x73\x69\x78\x20\x6d\x6f\x6e\x74\x68\x73\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x62\x65\x20\x75\x70\x64\x61\x74\x65\x64\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x64\x2c\x20\x6f\x72\x20\x6f\x62\x73\x6f\x6c\x65\x74\x65\x64\x20\x62\x79\x20\x6f\x74\x68\x65\x72\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x73\x20\x61\x74\x20\x61\x6e\x79\x20\x74\x69\x6d\x65\x2e\x20\x49\x74\x20\x69\x73\x20\x69\x6e\x61\x70\x70\x72\x6f\x70\x72\x69\x61\x74\x65\x20\x74\x6f\x20\x75\x73\x65\x20\x49\x6e\x74\x65\x72\x6e\x65\x74\x2d\x44\x72\x61\x66\x74\x73\x20\x61\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x6d\x61\x74\x65\x72\x69\x61\x6c\x20\x6f\x72\x20\x74\x6f\x20\x63\x69\x74\x65\x20\x74\x68\x65\x6d\x20\x6f\x74\x68\x65\x72\x20\x74\x68\x61\x6e\x20\x61\x73\x20\x2f\xe2\x80\x9c\x77\x6f\x72\x6b\x20\x69\x6e\x20\x70\x72\x6f\x67\x72\x65\x73\x73\x2e\x2f\xe2\x80\x9d"
} };

bool __init chacha20poly1305_selftest(void)
{
	size_t i;
	u8 computed_result[512];
	bool success = true, ret;

	for (i = 0; i < ARRAY_SIZE(chacha20poly1305_enc_vectors); ++i) {
		memset(computed_result, 0, sizeof(computed_result));
		chacha20poly1305_encrypt(computed_result, chacha20poly1305_enc_vectors[i].input, chacha20poly1305_enc_vectors[i].ilen, chacha20poly1305_enc_vectors[i].assoc, chacha20poly1305_enc_vectors[i].alen, le64_to_cpu(*(__force __le64 *)chacha20poly1305_enc_vectors[i].nonce), chacha20poly1305_enc_vectors[i].key);
		if (memcmp(computed_result, chacha20poly1305_enc_vectors[i].result, chacha20poly1305_enc_vectors[i].ilen + POLY1305_MAC_SIZE)) {
			pr_info("chacha20poly1305 encryption self-test %zu: FAIL\n", i + 1);
			success = false;
		}
	}
	for (i = 0; i < ARRAY_SIZE(chacha20poly1305_dec_vectors); ++i) {
		memset(computed_result, 0, sizeof(computed_result));
		ret = chacha20poly1305_decrypt(computed_result, chacha20poly1305_dec_vectors[i].input, chacha20poly1305_dec_vectors[i].ilen, chacha20poly1305_dec_vectors[i].assoc, chacha20poly1305_dec_vectors[i].alen, le64_to_cpu(*(__force __le64 *)chacha20poly1305_dec_vectors[i].nonce), chacha20poly1305_dec_vectors[i].key);
		if (!ret || memcmp(computed_result, chacha20poly1305_dec_vectors[i].result, chacha20poly1305_dec_vectors[i].ilen - POLY1305_MAC_SIZE)) {
			pr_info("chacha20poly1305 decryption self-test %zu: FAIL\n", i + 1);
			success = false;
		}
	}
	for (i = 0; i < ARRAY_SIZE(xchacha20poly1305_enc_vectors); ++i) {
		memset(computed_result, 0, sizeof(computed_result));
		xchacha20poly1305_encrypt(computed_result, xchacha20poly1305_enc_vectors[i].input, xchacha20poly1305_enc_vectors[i].ilen, xchacha20poly1305_enc_vectors[i].assoc, xchacha20poly1305_enc_vectors[i].alen, xchacha20poly1305_enc_vectors[i].nonce, xchacha20poly1305_enc_vectors[i].key);
		if (memcmp(computed_result, xchacha20poly1305_enc_vectors[i].result, xchacha20poly1305_enc_vectors[i].ilen + POLY1305_MAC_SIZE)) {
			pr_info("xchacha20poly1305 encryption self-test %zu: FAIL\n", i + 1);
			success = false;
		}
	}
	for (i = 0; i < ARRAY_SIZE(xchacha20poly1305_dec_vectors); ++i) {
		memset(computed_result, 0, sizeof(computed_result));
		ret = xchacha20poly1305_decrypt(computed_result, xchacha20poly1305_dec_vectors[i].input, xchacha20poly1305_dec_vectors[i].ilen, xchacha20poly1305_dec_vectors[i].assoc, xchacha20poly1305_dec_vectors[i].alen, xchacha20poly1305_dec_vectors[i].nonce, xchacha20poly1305_dec_vectors[i].key);
		if (!ret || memcmp(computed_result, xchacha20poly1305_dec_vectors[i].result, xchacha20poly1305_dec_vectors[i].ilen - POLY1305_MAC_SIZE)) {
			pr_info("xchacha20poly1305 decryption self-test %zu: FAIL\n", i + 1);
			success = false;
		}
	}
	if (success)
		pr_info("chacha20poly1305 self-tests: pass\n");
	return success;
}
#endif
