//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface InstallEBookDownloadOperation
{
    _Bool _isSharedDownload;	// 91 = 0x5b
    NSString *_bookPath;	// 96 = 0x60
}

+ (id)sharedBookContainerPath;	// IMP=0x0040000000136bd9
+ (id)sharedBookContainerCachesPath;	// IMP=0x0010000000136bd1
- (void).cxx_destruct;	// IMP=0x0020000000139b95
- (id)_syncedBooksPath;	// IMP=0x0010000000139b19
- (id)_storeFrontIdentifier;	// IMP=0x00100000001399c7
- (void)_removeDuplicateEntry:(id)arg1;	// IMP=0x001000000013978a
- (id)_newManifestEntry:(_Bool)arg1 withFileName:(id)arg2;	// IMP=0x0010000000138d25
- (id)_newManifestEntry:(id)arg1;	// IMP=0x0010000000138d0e
- (_Bool)_installMediaAsset:(id)arg1 assetInstalledPath:(id *)arg2 fileName:(id *)arg3 drmPath:(id *)arg4 error:(id *)arg5;	// IMP=0x00100000001376ef
- (id)_existingManifestEntry;	// IMP=0x0010000000137577
- (id)_bookManifest;	// IMP=0x0010000000137352
- (void)_addPurchaseManifestItem:(_Bool)arg1;	// IMP=0x0010000000136be1
- (void)run;	// IMP=0x0010000000135fe6

@end

