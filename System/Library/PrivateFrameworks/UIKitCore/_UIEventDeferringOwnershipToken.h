//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventDeferringTarget, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringOwnershipToken : NSObject
{
    NSMutableSet *_environmentsPendingInvalidation;	// 8 = 0x8
    _Bool _hasInvalidated;	// 16 = 0x10
    NSString *_ownerClass;	// 24 = 0x18
    long long _owningInterfaceElementCategory;	// 32 = 0x20
    void *_ownerPointer;	// 40 = 0x28
    unsigned long long _scope;	// 48 = 0x30
    NSSet *_environments;	// 56 = 0x38
    BKSHIDEventDeferringTarget *_target;	// 64 = 0x40
    NSString *_reason;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000140adc
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000014079c
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000014074c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001406fc
- (id)succinctDescriptionBuilder;	// IMP=0x00000000001405c2
- (id)succinctDescription;	// IMP=0x0000000000140572
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000014045c
- (id)init;	// IMP=0x00000000001402dd

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

