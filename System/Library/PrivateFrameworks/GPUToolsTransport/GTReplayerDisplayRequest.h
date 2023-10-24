//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GTReplayerDisplayRequest
{
    unsigned int _index;	// 8 = 0x8
    int _filters;	// 12 = 0xc
    CDUnion_afa92939 _dispatchUID;	// 16 = 0x10
    unsigned long long _streamRef;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000056a0
@property(nonatomic) int filters; // @synthesize filters=_filters;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000579c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000056a8

@end

