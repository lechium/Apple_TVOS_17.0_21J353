//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface asn1SetToken
{
    const char *mReadPointer;	// 40 = 0x28
}

- (id)nextToken;	// IMP=0x00000000000f5d6b
- (void)reset;	// IMP=0x00000000000f5d43
- (id)description;	// IMP=0x00000000000f5d1a
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;	// IMP=0x00000000000f5c96

@end

