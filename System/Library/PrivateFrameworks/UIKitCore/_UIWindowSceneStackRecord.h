//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneStackRecord : NSObject
{
    UIWindowScene *_windowScene;	// 8 = 0x8
    unsigned long long _evaluationStrategy;	// 16 = 0x10
    unsigned long long _lastPushedTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ba502
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000ba1b1
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000ba161
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000ba111
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000b9ffc
- (id)succinctDescription;	// IMP=0x00000000000b9fac
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

