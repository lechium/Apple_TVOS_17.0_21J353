//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject
{
    unsigned int _size;	// 8 = 0x8
    unsigned int _sizeUpperBound;	// 12 = 0xc
    NSMutableArray *_assetBatches;	// 16 = 0x10
    NSMutableSet *_failedAssetBatches;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000082790
@property(retain, nonatomic) NSMutableSet *failedAssetBatches; // @synthesize failedAssetBatches=_failedAssetBatches;
@property(nonatomic) unsigned int sizeUpperBound; // @synthesize sizeUpperBound=_sizeUpperBound;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableArray *assetBatches; // @synthesize assetBatches=_assetBatches;
- (id)description;	// IMP=0x000000000008272d
- (id)CKPropertiesDescription;	// IMP=0x000000000008258d
- (_Bool)isEmpty;	// IMP=0x0000000000082570
- (id)successfulBatches;	// IMP=0x000000000008251d
- (_Bool)hasSuccessfulBatches;	// IMP=0x0000000000082426
- (void)addFailedBatch:(id)arg1;	// IMP=0x0000000000082407
- (void)addAssetBatch:(id)arg1;	// IMP=0x0000000000082357
- (id)init;	// IMP=0x00000000000822e2

@end

