//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GTReplayFetchImageBlock
{
    unsigned int _index;	// 8 = 0x8
    CDUnion_afa92939 _dispatchUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000003da1
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003e54
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003da9

@end
