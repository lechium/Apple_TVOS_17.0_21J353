//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, RBSAssertion, RBSProcessHandle;
@protocol OS_dispatch_queue;

@interface BKAlternateSystemApp : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    RBSProcessHandle *_processHandle;	// 24 = 0x18
    RBSAssertion *_visibilityAssertion;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    CDUnknownBlockType _pendingExitBlock;	// 48 = 0x30
}

+ (id)_bundleInfoOverrides;	// IMP=0x002000000001ef1a
- (void).cxx_destruct;	// IMP=0x002000000001ecac
@property(copy, nonatomic) CDUnknownBlockType pendingExitBlock; // @synthesize pendingExitBlock=_pendingExitBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RBSAssertion *visibilityAssertion; // @synthesize visibilityAssertion=_visibilityAssertion;
@property(retain, nonatomic) RBSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_noteExitedWithContext:(id)arg1;	// IMP=0x001000000001eb02
- (_Bool)terminate;	// IMP=0x001000000001e8d7
- (_Bool)launchWithResultBlock:(CDUnknownBlockType)arg1 exitBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d611
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000001d57a
@property(readonly, copy) NSString *description;
- (id)initWithBundleId:(id)arg1 options:(id)arg2 queue:(id)arg3;	// IMP=0x001000000001d49a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

