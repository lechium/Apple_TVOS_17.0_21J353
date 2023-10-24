//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventDeferringEnvironment, NSString;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringDescriptor : NSObject
{
    _Bool _compatibility;	// 8 = 0x8
    unsigned int _predicateContextID;	// 12 = 0xc
    int _targetPID;	// 16 = 0x10
    unsigned int _targetContextID;	// 20 = 0x14
    unsigned long long _scope;	// 24 = 0x18
    BKSHIDEventDeferringEnvironment *_environment;	// 32 = 0x20
    NSString *_displayHardwareIdentifier;	// 40 = 0x28
    NSString *_predicateSceneIdentityString;	// 48 = 0x30
    void *_predicateWindowPointer;	// 56 = 0x38
    NSString *_targetSceneIdentityString;	// 64 = 0x40
    void *_targetWindowPointer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a33f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a33e7
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a30bf
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a306f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a301f
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000a2f5b
- (id)succinctDescription;	// IMP=0x00000000000a2f0b
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a2af5
- (id)init;	// IMP=0x00000000000a29a6

// Remaining properties
@property(readonly) Class superclass;

@end

