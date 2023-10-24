//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA256state_st {
    unsigned int count[2];
    unsigned int hash[8];
    unsigned int wbuf[16];
};

struct CC_SHA512state_st {
    unsigned long long count[2];
    unsigned long long hash[8];
    unsigned long long wbuf[16];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
} CDStruct_6238c8e0;

typedef struct {
    unsigned long long _field1;
} CDStruct_69d7cc99;

typedef struct {
    unsigned short _field1;
} CDStruct_f6a177db;

typedef struct {
    char *dst_ptr;
    unsigned long long dst_size;
    char *src_ptr;
    unsigned long long src_size;
    void *state;
} CDStruct_4686af4b;

typedef struct {
    unsigned char _field1[2];
    CDStruct_f6a177db _field2;
    CDStruct_6238c8e0 _field3;
    CDStruct_6238c8e0 _field4;
    CDStruct_f6a177db _field5;
    CDStruct_f6a177db _field6;
} CDStruct_388cbe1a;

typedef struct {
    int hashType;
    union {
        struct CC_MD5state_st md5;
        struct CC_SHA1state_st sha1;
        struct CC_SHA256state_st sha224;
        struct CC_SHA256state_st sha256;
        struct CC_SHA512state_st sha384;
        struct CC_SHA512state_st sha512;
    } context;
} CDStruct_6e7ce3cd;

typedef struct {
    unsigned char _field1[4];
    union {
        struct {
            CDStruct_6238c8e0 _field1;
            CDStruct_69d7cc99 _field2;
            CDStruct_69d7cc99 _field3;
        } _field1;
        struct {
            CDStruct_6238c8e0 _field1;
            CDStruct_6238c8e0 _field2;
            CDStruct_6238c8e0 _field3;
        } _field2;
    } _field2;
} CDStruct_1e765437;

typedef struct {
    unsigned char _field1[4];
    CDStruct_f6a177db _field2;
    CDStruct_f6a177db _field3;
    CDStruct_f6a177db _field4;
    union {
        struct {
            CDStruct_f6a177db _field1;
            CDStruct_f6a177db _field2;
        } _field1;
        CDStruct_6238c8e0 _field2;
    } _field5;
    CDStruct_6238c8e0 _field6;
    CDStruct_6238c8e0 _field7;
    CDStruct_6238c8e0 _field8;
    CDStruct_f6a177db _field9;
    CDStruct_f6a177db _field10;
    unsigned char _field11[0];
} CDStruct_6e051504;

