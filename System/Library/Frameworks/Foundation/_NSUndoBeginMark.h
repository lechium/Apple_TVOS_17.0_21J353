//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSUndoBeginMark
{
    id _groupIdentifier;	// 32 = 0x20
    _Bool _isDiscardable;	// 40 = 0x28
}

- (id)description;	// IMP=0x000000000073d499
- (_Bool)isBeginMark;	// IMP=0x000000000073d491
- (void)setDiscardable:(_Bool)arg1;	// IMP=0x000000000073d481
- (_Bool)isDiscardable;	// IMP=0x000000000073d471
- (id)groupIdentifier;	// IMP=0x000000000073d453
- (void)setGroupIdentifier:(id)arg1;	// IMP=0x000000000073d3f8
- (void)dealloc;	// IMP=0x000000000073d393

@end

