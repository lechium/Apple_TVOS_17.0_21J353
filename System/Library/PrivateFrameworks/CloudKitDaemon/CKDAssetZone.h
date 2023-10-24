//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDAssetZoneKey, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetZone : NSObject
{
    CKDAssetZoneKey *_assetZoneKey;	// 8 = 0x8
    NSMutableOrderedSet *_assetRecords;	// 16 = 0x10
    NSMutableDictionary *_assetRecordsByRecordID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011bd1f
@property(retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID; // @synthesize assetRecordsByRecordID=_assetRecordsByRecordID;
@property(retain, nonatomic) NSMutableOrderedSet *assetRecords; // @synthesize assetRecords=_assetRecords;
@property(retain, nonatomic) CKDAssetZoneKey *assetZoneKey; // @synthesize assetZoneKey=_assetZoneKey;
- (id)description;	// IMP=0x000000000011bcc6
- (id)CKPropertiesDescription;	// IMP=0x000000000011bbfe
- (void)addMMCSSectionItem:(id)arg1;	// IMP=0x000000000011b98b
- (void)addRereferencedMMCSItem:(id)arg1;	// IMP=0x000000000011b736
- (void)addMMCSItem:(id)arg1;	// IMP=0x000000000011b4e1
- (id)initWithAssetZoneKey:(id)arg1;	// IMP=0x000000000011b441

@end

