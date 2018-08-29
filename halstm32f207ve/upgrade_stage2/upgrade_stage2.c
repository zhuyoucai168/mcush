/****************************** BEGIN OF FILE *******************************/
/* NOTES:                                                                   */
/* THIS FILE IS GENERATED AUTOMATICALLY, DO NOT MODIFY IT MANUALLY !!!      */
/* Last modified at Mon Aug  6 13:13:47 2018                                */
/****************************************************************************/
#define __IN_UPGRADE_STAGE2_C__
/****************************************************************************/
/* This is the 2nd stage upgrade program, compile and link it with the      */
/* main firmware.  After preparing the new firmware in swap flash sectors,  */
/* copy the program to sram and run it.                                     */
/****************************************************************************/

const unsigned int upgrade_prog_length = 1104;

const char upgrade_prog_data[] = {
0x11, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xf3, 0x4f, 0x8f, 0x05, 
0x49, 0x06, 0x4b, 0xca, 0x68, 0x02, 0xf4, 0xe0, 0x62, 0x13, 0x43, 0xcb, 0x60, 
0xbf, 0xf3, 0x4f, 0x8f, 0x00, 0xbf, 0xfd, 0xe7, 0x00, 0xbf, 0x00, 0xed, 0x00, 
0xe0, 0x04, 0x00, 0xfa, 0x05, 0x32, 0x4b, 0x70, 0xb5, 0x1e, 0x68, 0x00, 0xf0, 
0xf5, 0xf9, 0x00, 0x20, 0x00, 0xf0, 0x7e, 0xf8, 0x2f, 0x4c, 0x00, 0x20, 0x00, 
0xf0, 0x96, 0xf8, 0xb6, 0x08, 0x00, 0xf0, 0xcb, 0xf8, 0x00, 0x20, 0x04, 0xf1, 
0x0c, 0x05, 0x01, 0x36, 0x00, 0xf0, 0xa9, 0xf8, 0x00, 0xf0, 0xd1, 0xf8, 0x00, 
0xf0, 0xdd, 0xf8, 0x34, 0xf8, 0x02, 0x0b, 0x02, 0x21, 0x00, 0xf0, 0xfc, 0xf8, 
0x08, 0x28, 0x34, 0xd1, 0x00, 0xf0, 0xd8, 0xf9, 0xac, 0x42, 0xf4, 0xd1, 0x22, 
0x4c, 0x00, 0x25, 0xa4, 0xf5, 0x80, 0x20, 0x21, 0x68, 0x00, 0xf0, 0x4f, 0xf9, 
0x08, 0x28, 0x05, 0xf1, 0x01, 0x05, 0x04, 0xf1, 0x04, 0x04, 0x23, 0xd1, 0x00, 
0xf0, 0xc7, 0xf9, 0xae, 0x42, 0xf0, 0xd1, 0x30, 0x20, 0x02, 0x21, 0x00, 0xf0, 
0xe1, 0xf8, 0x08, 0x28, 0x19, 0xd1, 0x00, 0xf0, 0xbd, 0xf9, 0x38, 0x20, 0x02, 
0x21, 0x00, 0xf0, 0xd9, 0xf8, 0x08, 0x28, 0x11, 0xd1, 0x00, 0xf0, 0xb5, 0xf9, 
0x00, 0xf0, 0xc5, 0xf8, 0x01, 0x20, 0x00, 0xf0, 0x3c, 0xf8, 0x04, 0x20, 0x00, 
0xf0, 0x29, 0xf8, 0x01, 0x20, 0x00, 0xf0, 0x52, 0xf8, 0x01, 0x20, 0x00, 0xf0, 
0x6b, 0xf8, 0x01, 0x20, 0x70, 0xbd, 0x00, 0xf0, 0xb5, 0xf8, 0x01, 0x20, 0x00, 
0xf0, 0x2c, 0xf8, 0x04, 0x20, 0x00, 0xf0, 0x19, 0xf8, 0x01, 0x20, 0x00, 0xf0, 
0x42, 0xf8, 0x01, 0x20, 0x00, 0xf0, 0x5b, 0xf8, 0x00, 0x20, 0x70, 0xbd, 0x00, 
0xbf, 0xfc, 0xff, 0x07, 0x08, 0x38, 0x04, 0x00, 0x20, 0x00, 0x00, 0x04, 0x08, 
0x08, 0xb5, 0xff, 0xf7, 0x91, 0xff, 0xff, 0xf7, 0x7d, 0xff, 0x00, 0xbf, 0xff, 
0xf7, 0xf8, 0xff, 0x70, 0x47, 0x00, 0x00, 0x80, 0xb4, 0x83, 0xb0, 0x00, 0xaf, 
0x78, 0x60, 0x04, 0x4b, 0x7a, 0x68, 0xd2, 0xb2, 0x1a, 0x70, 0x0c, 0x37, 0xbd, 
0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0xbf, 0x00, 0x3c, 0x02, 0x40, 
0x80, 0xb4, 0x83, 0xb0, 0x00, 0xaf, 0x03, 0x46, 0xfb, 0x71, 0xfb, 0x79, 0x00, 
0x2b, 0x06, 0xd0, 0x08, 0x4a, 0x08, 0x4b, 0x1b, 0x68, 0x43, 0xf4, 0x80, 0x73, 
0x13, 0x60, 0x05, 0xe0, 0x05, 0x4a, 0x04, 0x4b, 0x1b, 0x68, 0x23, 0xf4, 0x80, 
0x73, 0x13, 0x60, 0x0c, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 
0x00, 0x3c, 0x02, 0x40, 0x80, 0xb4, 0x83, 0xb0, 0x00, 0xaf, 0x03, 0x46, 0xfb, 
0x71, 0xfb, 0x79, 0x00, 0x2b, 0x06, 0xd0, 0x08, 0x4a, 0x08, 0x4b, 0x1b, 0x68, 
0x43, 0xf4, 0x00, 0x73, 0x13, 0x60, 0x05, 0xe0, 0x05, 0x4a, 0x04, 0x4b, 0x1b, 
0x68, 0x23, 0xf4, 0x00, 0x73, 0x13, 0x60, 0x0c, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 
0x04, 0x7b, 0x70, 0x47, 0x00, 0x3c, 0x02, 0x40, 0x80, 0xb4, 0x83, 0xb0, 0x00, 
0xaf, 0x03, 0x46, 0xfb, 0x71, 0xfb, 0x79, 0x00, 0x2b, 0x06, 0xd0, 0x08, 0x4a, 
0x08, 0x4b, 0x1b, 0x68, 0x43, 0xf4, 0x80, 0x63, 0x13, 0x60, 0x05, 0xe0, 0x05, 
0x4a, 0x04, 0x4b, 0x1b, 0x68, 0x23, 0xf4, 0x80, 0x63, 0x13, 0x60, 0x0c, 0x37, 
0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0x3c, 0x02, 0x40, 0x80, 
0xb4, 0x00, 0xaf, 0x04, 0x4a, 0x04, 0x4b, 0x1b, 0x68, 0x43, 0xf4, 0x00, 0x63, 
0x13, 0x60, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0x3c, 0x02, 
0x40, 0x80, 0xb4, 0x00, 0xaf, 0x04, 0x4a, 0x04, 0x4b, 0x1b, 0x68, 0x43, 0xf4, 
0x80, 0x53, 0x13, 0x60, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 
0x3c, 0x02, 0x40, 0x80, 0xb4, 0x00, 0xaf, 0x06, 0x4b, 0x1b, 0x69, 0x00, 0x2b, 
0x05, 0xda, 0x04, 0x4b, 0x05, 0x4a, 0x5a, 0x60, 0x03, 0x4b, 0x04, 0x4a, 0x5a, 
0x60, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0x3c, 0x02, 0x40, 
0x23, 0x01, 0x67, 0x45, 0xab, 0x89, 0xef, 0xcd, 0x80, 0xb4, 0x00, 0xaf, 0x04, 
0x4a, 0x04, 0x4b, 0x1b, 0x69, 0x43, 0xf0, 0x00, 0x43, 0x13, 0x61, 0xbd, 0x46, 
0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0x3c, 0x02, 0x40, 0x80, 0xb5, 0x84, 
0xb0, 0x00, 0xaf, 0x78, 0x60, 0x0b, 0x46, 0xfb, 0x70, 0x00, 0x23, 0xfb, 0x60, 
0x08, 0x23, 0xfb, 0x72, 0xfb, 0x78, 0x00, 0x2b, 0x02, 0xd1, 0x00, 0x23, 0xfb, 
0x60, 0x10, 0xe0, 0xfb, 0x78, 0x01, 0x2b, 0x03, 0xd1, 0x4f, 0xf4, 0x80, 0x73, 
0xfb, 0x60, 0x09, 0xe0, 0xfb, 0x78, 0x02, 0x2b, 0x03, 0xd1, 0x4f, 0xf4, 0x00, 
0x73, 0xfb, 0x60, 0x02, 0xe0, 0x4f, 0xf4, 0x40, 0x73, 0xfb, 0x60, 0x00, 0xf0, 
0xa5, 0xf8, 0x03, 0x46, 0xfb, 0x72, 0xfb, 0x7a, 0x08, 0x2b, 0x2f, 0xd1, 0x1a, 
0x4a, 0x1a, 0x4b, 0x1b, 0x69, 0x23, 0xf4, 0x40, 0x73, 0x13, 0x61, 0x17, 0x49, 
0x17, 0x4b, 0x1a, 0x69, 0xfb, 0x68, 0x13, 0x43, 0x0b, 0x61, 0x14, 0x4a, 0x14, 
0x4b, 0x1b, 0x69, 0x23, 0xf0, 0xf8, 0x03, 0x13, 0x61, 0x11, 0x49, 0x11, 0x4b, 
0x1a, 0x69, 0x7b, 0x68, 0x13, 0x43, 0x43, 0xf0, 0x02, 0x03, 0x0b, 0x61, 0x0d, 
0x4a, 0x0d, 0x4b, 0x1b, 0x69, 0x43, 0xf4, 0x80, 0x33, 0x13, 0x61, 0x00, 0xf0, 
0x7e, 0xf8, 0x03, 0x46, 0xfb, 0x72, 0x08, 0x4a, 0x08, 0x4b, 0x1b, 0x69, 0x23, 
0xf0, 0x02, 0x03, 0x13, 0x61, 0x05, 0x4a, 0x05, 0x4b, 0x1b, 0x69, 0x23, 0xf0, 
0xf8, 0x03, 0x13, 0x61, 0xfb, 0x7a, 0x18, 0x46, 0x10, 0x37, 0xbd, 0x46, 0x80, 
0xbd, 0x00, 0xbf, 0x00, 0x3c, 0x02, 0x40, 0x80, 0xb5, 0x84, 0xb0, 0x00, 0xaf, 
0x78, 0x60, 0x39, 0x60, 0x08, 0x23, 0xfb, 0x73, 0x00, 0xf0, 0x5f, 0xf8, 0x03, 
0x46, 0xfb, 0x73, 0xfb, 0x7b, 0x08, 0x2b, 0x1e, 0xd1, 0x11, 0x4a, 0x11, 0x4b, 
0x1b, 0x69, 0x23, 0xf4, 0x40, 0x73, 0x13, 0x61, 0x0e, 0x4a, 0x0e, 0x4b, 0x1b, 
0x69, 0x43, 0xf4, 0x00, 0x73, 0x13, 0x61, 0x0b, 0x4a, 0x0b, 0x4b, 0x1b, 0x69, 
0x43, 0xf0, 0x01, 0x03, 0x13, 0x61, 0x7b, 0x68, 0x3a, 0x68, 0x1a, 0x60, 0x00, 
0xf0, 0x43, 0xf8, 0x03, 0x46, 0xfb, 0x73, 0x05, 0x4a, 0x04, 0x4b, 0x1b, 0x69, 
0x23, 0xf0, 0x01, 0x03, 0x13, 0x61, 0xfb, 0x7b, 0x18, 0x46, 0x10, 0x37, 0xbd, 
0x46, 0x80, 0xbd, 0x00, 0x3c, 0x02, 0x40, 0x80, 0xb4, 0x83, 0xb0, 0x00, 0xaf, 
0x08, 0x23, 0xfb, 0x71, 0x16, 0x4b, 0xdb, 0x68, 0x03, 0xf4, 0x80, 0x33, 0x00, 
0x2b, 0x02, 0xd0, 0x01, 0x23, 0xfb, 0x71, 0x1c, 0xe0, 0x11, 0x4b, 0xdb, 0x68, 
0x03, 0xf0, 0x10, 0x03, 0x00, 0x2b, 0x02, 0xd0, 0x05, 0x23, 0xfb, 0x71, 0x13, 
0xe0, 0x0d, 0x4b, 0xdb, 0x68, 0x03, 0xf0, 0xef, 0x03, 0x00, 0x2b, 0x02, 0xd0, 
0x06, 0x23, 0xfb, 0x71, 0x0a, 0xe0, 0x08, 0x4b, 0xdb, 0x68, 0x03, 0xf0, 0x02, 
0x03, 0x00, 0x2b, 0x02, 0xd0, 0x07, 0x23, 0xfb, 0x71, 0x01, 0xe0, 0x08, 0x23, 
0xfb, 0x71, 0xfb, 0x79, 0x18, 0x46, 0x0c, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 
0x7b, 0x70, 0x47, 0x00, 0x3c, 0x02, 0x40, 0x80, 0xb5, 0x82, 0xb0, 0x00, 0xaf, 
0x08, 0x23, 0xfb, 0x71, 0xff, 0xf7, 0xc5, 0xff, 0x03, 0x46, 0xfb, 0x71, 0x03, 
0xe0, 0xff, 0xf7, 0xc0, 0xff, 0x03, 0x46, 0xfb, 0x71, 0xfb, 0x79, 0xdb, 0xb2, 
0x01, 0x2b, 0xf7, 0xd0, 0xfb, 0x79, 0xdb, 0xb2, 0x18, 0x46, 0x08, 0x37, 0xbd, 
0x46, 0x80, 0xbd, 0x80, 0xb4, 0x00, 0xaf, 0x03, 0x4b, 0x4a, 0xf6, 0xaa, 0x22, 
0x1a, 0x60, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0x30, 0x00, 
0x40, 0x00, 0x00, 0x08, 0x00, 0x10, 0x00, 0x18, 0x00, 0x20, 0x00, 0x28, 0x00, 
0x30, 0x00, 0x38, 0x00, 0x40, 0x00, 0x48, 0x00, 0x50, 0x00, 0x58, 0x00, 
};
/******************************* END OF FILE ********************************/