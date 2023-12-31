//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSBundleProxy, NSArray, NSOperationQueue, SDAirDropHandler, SDAirDropHandleriCloudDrive;

@interface SDAirDropHandlerGenericFiles
{
    NSOperationQueue *_workOperationsQueue;	// 8 = 0x8
    SDAirDropHandleriCloudDrive *_icloudDriveHandler;	// 16 = 0x10
    SDAirDropHandler *_selectedHandler;	// 24 = 0x18
    LSBundleProxy *_selectedProxy;	// 32 = 0x20
    _Bool _willUseOpenWithAlert;	// 40 = 0x28
    NSArray *_availableApplications;	// 48 = 0x30
    LSBundleProxy *_selectedApplication;	// 56 = 0x38
}

+ (void)launchFilesToDefaultFolderWithURLs:(id)arg1 defaultFolder:(id)arg2 openURLs:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00400000000b1e55
- (void).cxx_destruct;	// IMP=0x00200000000b2274
@property(retain, nonatomic) LSBundleProxy *selectedApplication; // @synthesize selectedApplication=_selectedApplication;
@property(copy, nonatomic) NSArray *availableApplications; // @synthesize availableApplications=_availableApplications;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000b21c5
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x00100000000b2101
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;	// IMP=0x00100000000b2018
- (id)actionsForModernReadyForOpen;	// IMP=0x00100000000b1fb9
- (void)handleMoveToAppShareSheetSucceeded;	// IMP=0x00100000000b1fb3
- (void)launchFilesToDefaultFolder;	// IMP=0x00100000000b1e5b
- (id)saveToDefaultFolderWithError:(id *)arg1;	// IMP=0x00100000000b1bf3
- (id)defaultFolder;	// IMP=0x00100000000b1b30
- (void)saveAndUpdateTransfer;	// IMP=0x00100000000b1a8d
- (id)defaultOpenActionBundleID;	// IMP=0x00100000000b1a80
- (void)performActionWithBundleProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1418
- (void)addOpenWithActions;	// IMP=0x00100000000b10d0
- (void)acceptActionTriggered;	// IMP=0x00100000000b0f7d
- (_Bool)shouldOpenAutomaticallyAfterUserAccepts;	// IMP=0x00100000000b0e81
- (id)actionForBundleProxy:(id)arg1;	// IMP=0x00100000000b0cc5
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x00100000000b0c64
- (void)updatePossibleActions;	// IMP=0x00100000000b08d9
- (id)suitableContentsDescription;	// IMP=0x00100000000b0633
- (id)firstReceivedFilename;	// IMP=0x00100000000b056c
- (long long)transferTypes;	// IMP=0x00100000000b0537
- (_Bool)canHandleTransfer;	// IMP=0x00100000000b0525
- (void)performViewActionWithImportedURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b051f
- (void)performImportWithCompletedURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b043b
- (_Bool)shouldEndAfterOpen;	// IMP=0x00100000000b0433
- (id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00100000000b035c
- (id)initWithTransfer:(id)arg1;	// IMP=0x00100000000b0348

@end

