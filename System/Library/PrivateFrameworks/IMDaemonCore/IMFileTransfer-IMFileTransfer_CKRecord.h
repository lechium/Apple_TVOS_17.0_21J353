//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMFileTransfer.h>

@interface IMFileTransfer (IMFileTransfer_CKRecord)
+ (_Bool)validateMD5HashForRecord:(id)arg1;	// IMP=0x00800000000ccd89
+ (id)md5HashForRecord:(id)arg1;	// IMP=0x00800000000cccb4
+ (void)cleanUpAssetsOnDiskForRecord:(id)arg1;	// IMP=0x00800000000ccbd7
+ (_Bool)attachmentRecordHasAsset:(id)arg1;	// IMP=0x00800000000ccaa8
+ (id)transferGUIDOfRecord:(id)arg1;	// IMP=0x00800000000cc9d3
+ (long long)sizeOfAssetForRecord:(id)arg1;	// IMP=0x00800000000cc8e0
+ (id)utiTypeForRecord:(id)arg1;	// IMP=0x00800000000cc80b
+ (_Bool)_recordIsInvalid:(id)arg1;	// IMP=0x00800000000cc78c
+ (void)cleanUpAssetURL:(id)arg1;	// IMP=0x00800000000ca9c2
+ (void)cleanUpAsset:(id)arg1;	// IMP=0x00800000000ca973
+ (id)transferMetaDataFromRecord:(id)arg1;	// IMP=0x00800000000ca841
+ (id)_recordType;	// IMP=0x00800000000c9357
- (id)_fileManager;	// IMP=0x00100000000cd15c
- (id)initWithCKRecord:(id)arg1 writeAssetToDisk:(_Bool)arg2;	// IMP=0x00100000000cc1a6
- (void)moveAssetFromRecord:(id)arg1;	// IMP=0x00100000000cb5c1
- (_Bool)hasPreferredAssetOverRecord:(id)arg1;	// IMP=0x00100000000cb0e9
- (_Bool)wantsAssetFromRecord:(id)arg1;	// IMP=0x00100000000cab1d
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x00100000000c9b07
- (id)recordIDWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x00100000000c98ff
- (void)_setRecordPropertiesBasedOnExistingRecord:(id)arg1;	// IMP=0x00100000000c9831
- (id)md5HashForTransfer;	// IMP=0x00100000000c97d2
- (id)md5HashForURL:(id)arg1;	// IMP=0x00100000000c967c
- (id)ckRecordIDFromExistingMetadata;	// IMP=0x00100000000c9612
- (id)_copyCKRecordFromExistingCKMetadata;	// IMP=0x00100000000c9508
- (id)_assetURLToInsertToRecord;	// IMP=0x00100000000c9364
- (id)_ckUniqueID;	// IMP=0x00100000000c9345
@end
