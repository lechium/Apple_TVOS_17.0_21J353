//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _EXExtensionAvailablilityObserver : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSArray *_queries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000035f81
@property(readonly, copy) NSArray *queries; // @synthesize queries=_queries;
@property(readonly) CDUnknownBlockType block; // @synthesize block=_block;
- (void)query:(id)arg1 resultDidUpdate:(id)arg2;	// IMP=0x0000000000035f1d
- (void)invalidate;	// IMP=0x0000000000035dda
- (void)start;	// IMP=0x0000000000035ae6
- (void)dealloc;	// IMP=0x0000000000035aa8
- (id)initWithObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000000359a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

