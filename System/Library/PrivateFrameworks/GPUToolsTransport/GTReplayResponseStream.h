//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GTReplayResponseStream
{
    unsigned int _state;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000007371
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000740a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007379
- (id)initWithState:(unsigned int)arg1;	// IMP=0x0000000000007312

@end

