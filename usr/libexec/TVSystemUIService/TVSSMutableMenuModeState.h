//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, TVSSMenuModeBannerContext;
@protocol FBSDisplayLayoutElement><PBSDisplayLayoutElement;

@interface TVSSMutableMenuModeState
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x002000000007c130
@property(nonatomic) long long siriPresentationVisibility; // @dynamic siriPresentationVisibility;
@property(copy, nonatomic) NSString *faceTimePlatterState; // @dynamic faceTimePlatterState;
@property(nonatomic, getter=isFaceTimeActive) _Bool faceTimeActive; // @dynamic faceTimeActive;
@property(nonatomic) long long playbackControlsState; // @dynamic playbackControlsState;
// Error: Property attributes should begin with the type ('T') attribute, property name: micInUse
// Property attributes: (null)

@property(nonatomic, getter=isCameraInUse) _Bool cameraInUse; // @dynamic cameraInUse;
@property(nonatomic, getter=isLocationInUse) _Bool locationInUse; // @dynamic locationInUse;
@property(retain, nonatomic) TVSSMenuModeBannerContext *bannerContext; // @dynamic bannerContext;
@property(nonatomic, getter=isPipActive) _Bool pipActive; // @dynamic pipActive;
@property(nonatomic, getter=isSplitViewVisible) _Bool splitViewVisible; // @dynamic splitViewVisible;
@property(nonatomic) _Bool hasUserAttention; // @dynamic hasUserAttention;
@property(retain, nonatomic) NSNumber *interactionRequestReason; // @dynamic interactionRequestReason;
@property(nonatomic) _Bool headboardRequestedVisibility; // @dynamic headboardRequestedVisibility;
@property(retain, nonatomic) id <FBSDisplayLayoutElement><PBSDisplayLayoutElement> keyboardFocusedElement; // @dynamic keyboardFocusedElement;
@property(retain, nonatomic) id <FBSDisplayLayoutElement><PBSDisplayLayoutElement> focusedApp; // @dynamic focusedApp;

@end

