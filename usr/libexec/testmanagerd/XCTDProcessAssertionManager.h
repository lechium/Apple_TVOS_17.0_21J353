//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, XCTDBKSProcessAssertionProviding;

@interface XCTDProcessAssertionManager : NSObject
{
    _Bool _valid;	// 8 = 0x8
    id <XCTDBKSProcessAssertionProviding> _assertionProvider;	// 16 = 0x10
    NSMutableDictionary *_processAssertionsByPID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)new;	// IMP=0x002000000002fc72
- (void).cxx_destruct;	// IMP=0x00200000000302fe
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *processAssertionsByPID; // @synthesize processAssertionsByPID=_processAssertionsByPID;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) id <XCTDBKSProcessAssertionProviding> assertionProvider; // @synthesize assertionProvider=_assertionProvider;
- (void)_setProcessAssertion:(id)arg1 forPID:(int)arg2;	// IMP=0x00100000000300c3
- (void)invalidateProcessAssertionForPID:(int)arg1;	// IMP=0x0010000000030052
- (void)requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fca1
- (id)init;	// IMP=0x001000000002fc32
- (id)initWithAssertionProvider:(id)arg1;	// IMP=0x001000000002fb55
- (void)invalidate;	// IMP=0x001000000002f914
- (void)_dispatchSyncIfValidOrAssert:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f764
- (void)dealloc;	// IMP=0x001000000002f6b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
