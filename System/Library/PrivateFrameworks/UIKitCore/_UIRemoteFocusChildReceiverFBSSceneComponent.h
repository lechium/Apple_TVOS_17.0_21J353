//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSSceneComponent.h>

@class NSString, _UIRemoteFocusParentFBSSceneComponent;

__attribute__((visibility("hidden")))
@interface _UIRemoteFocusChildReceiverFBSSceneComponent : FBSSceneComponent
{
    _UIRemoteFocusParentFBSSceneComponent *_hostSceneComponent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000014b68c2
@property(nonatomic) __weak _UIRemoteFocusParentFBSSceneComponent *hostSceneComponent; // @synthesize hostSceneComponent=_hostSceneComponent;
- (id)scene:(id)arg1 handleActions:(id)arg2;	// IMP=0x00000000014b6630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
