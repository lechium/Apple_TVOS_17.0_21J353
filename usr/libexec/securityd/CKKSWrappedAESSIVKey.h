//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKKSWrappedAESSIVKey
{
}

+ (id)zeroedKey;	// IMP=0x00200000001c162a
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001c1622
- (id)initWithCoder:(id)arg1;	// IMP=0x00400000001c1577
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001c1550
- (id)base64WrappedKey;	// IMP=0x00100000001c14fe
- (id)wrappedData;	// IMP=0x00100000001c14c0
- (id)initWithData:(id)arg1;	// IMP=0x00100000001c1394
- (id)initWithBase64:(id)arg1;	// IMP=0x00100000001c12b7
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x00100000001c11fc
- (id)init;	// IMP=0x00100000001c11c0

@end

