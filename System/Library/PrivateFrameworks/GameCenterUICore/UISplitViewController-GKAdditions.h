//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

@class NSString;

@interface UISplitViewController (GKAdditions)
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;	// IMP=0x002000000000dbb6
- (void)_gkForceNextContentUpdate;	// IMP=0x002000000000da75
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;	// IMP=0x002000000000da46
- (void)_gkResetContents;	// IMP=0x002000000000d917
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x002000000000d66c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

