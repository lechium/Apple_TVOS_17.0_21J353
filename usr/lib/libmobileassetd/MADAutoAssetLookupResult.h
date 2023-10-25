//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, MADAutoSetConfiguration, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoAssetLookupResult : NSObject
{
    MAAutoAssetSelector *_assetSelector;	// 8 = 0x8
    MADAutoSetConfiguration *_setConfiguration;	// 16 = 0x10
    NSString *_assetAudience;	// 24 = 0x18
    NSDictionary *_autoAssetCatalog;	// 32 = 0x20
    NSDate *_recordedTimestamp;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000041510
- (void).cxx_destruct;	// IMP=0x0000000000041781
@property(readonly, retain, nonatomic) NSDate *recordedTimestamp; // @synthesize recordedTimestamp=_recordedTimestamp;
@property(readonly, retain, nonatomic) NSDictionary *autoAssetCatalog; // @synthesize autoAssetCatalog=_autoAssetCatalog;
@property(readonly, retain, nonatomic) NSString *assetAudience; // @synthesize assetAudience=_assetAudience;
@property(readonly, retain, nonatomic) MADAutoSetConfiguration *setConfiguration; // @synthesize setConfiguration=_setConfiguration;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
- (id)summary;	// IMP=0x000000000004152a
- (id)description;	// IMP=0x0000000000041518
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000413c4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004114c
- (id)initWithAssetCatalog:(id)arg1 forAssetSelector:(id)arg2 forSetConfiguration:(id)arg3 forAssetAudience:(id)arg4;	// IMP=0x0000000000041059
- (id)initWithAssetCatalog:(id)arg1 forSetConfiguration:(id)arg2 forAssetAudience:(id)arg3;	// IMP=0x000000000004103f
- (id)initWithAssetCatalog:(id)arg1 forAssetSelector:(id)arg2 forAssetAudience:(id)arg3;	// IMP=0x0000000000041027

@end
