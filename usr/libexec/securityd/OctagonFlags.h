//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface OctagonFlags : NSObject
{
    NSMutableDictionary *_flagConditions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_flags;	// 24 = 0x18
    NSSet *_allowableFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000aa746
@property(readonly) NSSet *allowableFlags; // @synthesize allowableFlags=_allowableFlags;
@property(retain) NSMutableSet *flags; // @synthesize flags=_flags;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *flagConditions; // @synthesize flagConditions=_flagConditions;
- (void)_onqueueRemoveFlag:(id)arg1;	// IMP=0x00100000000aa4e5
- (void)setFlag:(id)arg1;	// IMP=0x00100000000aa42c
- (id)conditionForFlag:(id)arg1;	// IMP=0x00100000000aa3b2
- (void)_onqueueSetFlag:(id)arg1;	// IMP=0x00100000000aa31a
- (_Bool)_onqueueContains:(id)arg1;	// IMP=0x00100000000aa27d
- (id)dumpFlags;	// IMP=0x00100000000aa22d
- (id)contentsAsString;	// IMP=0x00100000000aa162
- (id)description;	// IMP=0x00100000000aa0f6
- (id)initWithQueue:(id)arg1 flags:(id)arg2;	// IMP=0x00100000000a9e5b

@end
