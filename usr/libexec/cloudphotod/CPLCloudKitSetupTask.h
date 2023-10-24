//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, CPLDerivativesFilter, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitSetupTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CPLDerivativesFilter *_derivativesFilter;	// 16 = 0x10
    CKRecordID *_fetchedUserRecordID;	// 24 = 0x18
    _Bool _shouldUpdateDisabledFeatures;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000c4dbe
@property(readonly, nonatomic) _Bool shouldUpdateDisabledFeatures; // @synthesize shouldUpdateDisabledFeatures=_shouldUpdateDisabledFeatures;
- (void)runOperations;	// IMP=0x00100000000c4d9c
- (void)fetchUserRecord;	// IMP=0x00100000000c4cdd
- (void)fetchDerivativesFilter;	// IMP=0x00100000000c49fd
- (void)fetchDisabledFeatures;	// IMP=0x00100000000c4595
- (id)initWithController:(id)arg1 updateDisabledFeatures:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4500

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

