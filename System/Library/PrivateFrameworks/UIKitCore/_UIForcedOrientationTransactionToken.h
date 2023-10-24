//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UIForcedOrientationTransactionHandler;

__attribute__((visibility("hidden")))
@interface _UIForcedOrientationTransactionToken : NSObject
{
    long long _originalInterfaceOrientation;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    NSString *_transactionReason;	// 24 = 0x18
    CDUnknownBlockType _commitCompletionBlock;	// 32 = 0x20
    id <_UIForcedOrientationTransactionHandler> _transactionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000a7f7c4
@property(nonatomic) __weak id <_UIForcedOrientationTransactionHandler> transactionHandler; // @synthesize transactionHandler=_transactionHandler;
@property(copy, nonatomic) CDUnknownBlockType commitCompletionBlock; // @synthesize commitCompletionBlock=_commitCompletionBlock;
@property(readonly, nonatomic) NSString *transactionReason; // @synthesize transactionReason=_transactionReason;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long originalInterfaceOrientation; // @synthesize originalInterfaceOrientation=_originalInterfaceOrientation;
- (id)_orientationDebugDescription;	// IMP=0x0000000000a7f752
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a7f740
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a7f72e
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a7f497
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a7f447
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a7f3f7
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000a7f34b
- (id)succinctDescription;	// IMP=0x0000000000a7f2fb
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000a7f297
- (void)cancel;	// IMP=0x0000000000a7f196
- (void)didCommitOrientation;	// IMP=0x0000000000a7f08a
- (void)commitAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a7eea5
- (id)initWithOriginalOrientation:(long long)arg1 handler:(id)arg2 reason:(id)arg3;	// IMP=0x0000000000a7ed5e

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

