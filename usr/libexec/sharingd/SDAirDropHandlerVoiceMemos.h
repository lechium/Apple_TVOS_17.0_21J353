//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SDAirDropHandlerVoiceMemos
{
    NSArray *_openAppURLs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009fb1c
@property(copy, nonatomic) NSArray *openAppURLs; // @synthesize openAppURLs=_openAppURLs;
- (_Bool)shouldEndAfterOpen;	// IMP=0x001000000009faf2
- (void)performViewActionWithImportedURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009fa2a
- (void)performImportWithCompletedURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f9b0
- (void)updatePossibleActions;	// IMP=0x001000000009f6d7
- (id)suitableContentsDescription;	// IMP=0x001000000009f510
- (long long)transferTypes;	// IMP=0x001000000009f4db
- (_Bool)canHandleTransfer;	// IMP=0x001000000009f434
@property(readonly, nonatomic) _Bool canHandleTransferRegardlessOfBundleID;
- (id)initWithTransfer:(id)arg1;	// IMP=0x001000000009f1ef

@end
