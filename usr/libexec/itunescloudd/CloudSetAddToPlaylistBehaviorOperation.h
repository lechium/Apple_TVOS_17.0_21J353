//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudSetAddToPlaylistBehaviorOperation
{
    long long _addToPlaylistBehavior;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000012499c
- (void)main;	// IMP=0x00200000001244db
- (_Bool)isPersistent;	// IMP=0x00100000001244d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000124456
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001243dc
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 addToPlaylistBehavior:(long long)arg3;	// IMP=0x0010000000124398
- (id)initWithAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2;	// IMP=0x001000000012432e

@end

