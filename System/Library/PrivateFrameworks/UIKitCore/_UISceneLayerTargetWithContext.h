//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISceneLayerTargetWithContext : NSObject
{
    id _context;	// 8 = 0x8
    unsigned long long _equalityType;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007b365a
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000007b359a
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000007b354a
- (id)succinctDescriptionBuilder;	// IMP=0x00000000007b352e
- (id)succinctDescription;	// IMP=0x00000000007b34de
@property(readonly, copy) NSString *description;
- (_Bool)matchesLayer:(id)arg1;	// IMP=0x00000000007b34b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007b343e
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007b3409
- (id)initWithContext:(id)arg1 equalityType:(unsigned long long)arg2 matchingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000007b326c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

