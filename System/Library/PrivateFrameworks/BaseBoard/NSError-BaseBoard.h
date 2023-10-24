//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (BaseBoard)
+ (id)bs_errorWithDomain:(id)arg1 code:(long long)arg2 configuration:(CDUnknownBlockType)arg3;	// IMP=0x001000000005255f
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000052c10
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000052bac
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000052860
- (id)succinctDescription;	// IMP=0x00100000000527fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
