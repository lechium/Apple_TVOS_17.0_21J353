//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface XCTDAuthorizedProcessTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_pidsToDispatchSources;	// 16 = 0x10
    CDUnknownBlockType _dispatchSourceProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002de6f
@property(readonly, copy) CDUnknownBlockType dispatchSourceProvider; // @synthesize dispatchSourceProvider=_dispatchSourceProvider;
@property(readonly) NSMutableDictionary *pidsToDispatchSources; // @synthesize pidsToDispatchSources=_pidsToDispatchSources;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_dispatchSourceForProcessID:(int)arg1;	// IMP=0x001000000002db58
- (_Bool)hasAuthorizedProcessID:(int)arg1;	// IMP=0x001000000002d9ee
- (void)authorizeProcessID:(int)arg1;	// IMP=0x001000000002d6de
- (void)dealloc;	// IMP=0x001000000002d5b9
- (id)init;	// IMP=0x001000000002d57b
- (id)initWithDispatchSourceProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d4b0

@end

