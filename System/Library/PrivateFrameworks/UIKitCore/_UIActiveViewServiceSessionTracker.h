//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIActiveViewServiceSessionTracker : NSObject
{
    NSMutableDictionary *_sortedActivityRecordsByIdiom;	// 8 = 0x8
    id <BSInvalidatable> _stateCaptureToken;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x001000000012e165
- (void).cxx_destruct;	// IMP=0x000000000012fa4f
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000012f4c4
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000012f474
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000012f424
- (id)succinctDescriptionBuilder;	// IMP=0x000000000012f408
- (id)succinctDescription;	// IMP=0x000000000012f3b8
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000012e36f
- (id)init;	// IMP=0x000000000012e270

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

