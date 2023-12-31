//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverHostManagerMac : NSObject
{
}

- (id)popoverSceneForPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c40891
- (_Bool)useDefaultPreferredAnimationControllerForDismissalWithPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c40889
- (_Bool)useDefaultPreferredAnimationControllerForPresentationWithPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c40881
- (_Bool)useDefaultPresentationViewForPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c40879
- (_Bool)shouldOccludeDuringPresentationForPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c40871
- (void)detachPopoverWithIdentifier:(id)arg1 fromPoint:(struct CGPoint)arg2 withCompletionCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c4086b
- (void)updateSupportsDetach:(_Bool)arg1 forPopoverWithIdentifier:(id)arg2;	// IMP=0x0000000000c40865
- (void)updateUserInterfaceStyle:(long long)arg1 forPopoverWithIdentifier:(id)arg2;	// IMP=0x0000000000c4085f
- (void)updatePopoverWithIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000c40859
- (void)closePopoverWithIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000c40853
- (id)createPopoverWithConfiguration:(id)arg1;	// IMP=0x0000000000c4084b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

