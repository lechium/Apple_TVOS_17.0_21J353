//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKDMAPPlaylistIdentifier
{
    unsigned long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000326ed
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000032ade
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032922
- (unsigned long long)hash;	// IMP=0x0000000000032867
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000327b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000326f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000326ad
- (id)initWithProtocol:(unsigned long long)arg1 type:(unsigned long long)arg2 nonPersistentID:(unsigned long long)arg3 persistentID:(unsigned long long)arg4;	// IMP=0x0000000000032663
- (id)initWithProtocol:(unsigned long long)arg1 nonPersistentID:(unsigned long long)arg2 persistentID:(unsigned long long)arg3;	// IMP=0x00000000000325f4

@end

