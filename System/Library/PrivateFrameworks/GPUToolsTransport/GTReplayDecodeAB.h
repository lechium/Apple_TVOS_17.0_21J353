//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GTReplayDecodeAB
{
    unsigned short _type;	// 8 = 0x8
    unsigned int _index;	// 12 = 0xc
    CDUnion_afa92939 _dispatchUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000054aa
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005584
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000054b2

@end

