//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UINavigationController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController
{
    _Bool _hasSetInitialNavigationItem;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x001000000064580e
+ (id)_exportedInterface;	// IMP=0x0010000000645763
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000645f43
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000645ef8
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000645ead
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000645e62
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000645e21
- (void)_updateNavigationItem;	// IMP=0x0000000000645c67
- (void)_locationsMenu:(id)arg1;	// IMP=0x0000000000645b89
- (void)_doneButton:(id)arg1;	// IMP=0x0000000000645b5e
- (id)hostingViewController;	// IMP=0x0000000000645b4c
- (void)_setTintColor:(id)arg1;	// IMP=0x0000000000645b1b
- (void)_documentPickerDidDismiss;	// IMP=0x0000000000645aa3
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006459c3
- (void)_setUploadURLWrapper:(id)arg1;	// IMP=0x000000000064593c
- (void)_setPickerMode:(unsigned long long)arg1;	// IMP=0x00000000006458b5
- (void)_setPickableTypes:(id)arg1;	// IMP=0x000000000064582e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

