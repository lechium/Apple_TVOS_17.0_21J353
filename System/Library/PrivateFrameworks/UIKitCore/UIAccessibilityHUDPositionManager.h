//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDPositionManager : NSObject
{
    NSMapTable *_managedHUDs;	// 8 = 0x8
    struct CGRect _keyboardAvoidanceArea;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00600000000a1b8f
- (void).cxx_destruct;	// IMP=0x00000000000a296c
- (void)stopManagingPositionOfHUD:(id)arg1;	// IMP=0x00000000000a2956
- (void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x00000000000a2937
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x00000000000a290b
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(struct CGRect)arg3;	// IMP=0x00000000000a21e4
- (void)keyboardFrameDidChange:(id)arg1;	// IMP=0x00000000000a20e1
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect)arg1;	// IMP=0x00000000000a1f31
- (void)dealloc;	// IMP=0x00000000000a1eaf
- (id)init;	// IMP=0x00000000000a1be4

@end

