#ifndef H_CHAINPARAMSSEEDS
#define H_CHAINPARAMSSEEDS

// Each line contains a 16-byte IPv6 address and a port.
// IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x59,0xa3,0xf9,0xed}, 15198},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x59,0xa3,0xf9,0xef}, 15198}
};

static SeedSpec6 pnSeed6_test[] = {
};
#endif
