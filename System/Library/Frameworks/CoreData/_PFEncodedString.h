//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _PFEncodedString
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _length;	// 12 = 0xc
    id _sourceData;	// 16 = 0x10
}

- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000007c88a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007c67b
- (unsigned long long)hash;	// IMP=0x000000000007c64d
- (unsigned long long)cStringLength;	// IMP=0x000000000007c63d
- (void)getCString:(char *)arg1;	// IMP=0x000000000007c607
- (const char *)UTF8String;	// IMP=0x000000000007c5fd
- (_Bool)_isCString;	// IMP=0x000000000007c5f5
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000007c5ac
- (void)getCharacters:(unsigned short *)arg1;	// IMP=0x000000000007c56e
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007c54a
- (unsigned long long)length;	// IMP=0x000000000007c53a
- (void)dealloc;	// IMP=0x000000000007c534
- (_Bool)_tryRetain;	// IMP=0x000000000007c517
- (_Bool)_isDeallocating;	// IMP=0x000000000007c4fa
- (id)copy;	// IMP=0x000000000007c4ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c462
- (unsigned long long)retainCount;	// IMP=0x000000000007c445
- (oneway void)release;	// IMP=0x000000000007c42f
- (id)retain;	// IMP=0x000000000007c40b
- (id)init;	// IMP=0x000000000007c3d4

@end

