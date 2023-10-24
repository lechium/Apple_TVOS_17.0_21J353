//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDXPCActivityInterface : HMFObject
{
}

- (void)unregisterXPCActivityWithActivityIdentifier:(id)arg1;	// IMP=0x00000000004eba1e
- (long long)stateForXPCActivity:(id)arg1;	// IMP=0x00000000004eba11
- (_Bool)setState:(long long)arg1 forXPCActivity:(id)arg2;	// IMP=0x00000000004eba01
- (void)setCriteria:(id)arg1 forXPCActivity:(id)arg2;	// IMP=0x00000000004eb9f1
- (id)criteriaForXPCActivity:(id)arg1;	// IMP=0x00000000004eb9dc
- (void)registerXPCActivityWithActivityIdentifier:(id)arg1 criteria:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004eb960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
