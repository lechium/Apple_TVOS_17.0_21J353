//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetProgress, MAAutoAssetSelector, MADAutoAssetClientRequest, MADAutoAssetDescriptor, MANAutoAssetInfoControl, NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoAssetJobParam : NSObject
{
    _Bool _catalogFromLookupCache;	// 8 = 0x8
    NSString *_paramSafeSummary;	// 16 = 0x10
    long long _paramType;	// 24 = 0x18
    MADAutoAssetClientRequest *_clientRequest;	// 32 = 0x20
    MAAutoAssetSelector *_autoAssetSelector;	// 40 = 0x28
    NSString *_autoAssetJobID;	// 48 = 0x30
    NSDictionary *_autoAssetCatalog;	// 56 = 0x38
    NSError *_finishedError;	// 64 = 0x40
    MAAutoAssetProgress *_downloadProgress;	// 72 = 0x48
    NSString *_assetTargetOSVersion;	// 80 = 0x50
    NSString *_assetTargetBuildVersion;	// 88 = 0x58
    MADAutoAssetDescriptor *_autoAssetDescriptor;	// 96 = 0x60
    MANAutoAssetInfoControl *_controlInformation;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001bdd3b
- (void).cxx_destruct;	// IMP=0x00000000001be1e9
@property(readonly, retain, nonatomic) MANAutoAssetInfoControl *controlInformation; // @synthesize controlInformation=_controlInformation;
@property(readonly, retain, nonatomic) MADAutoAssetDescriptor *autoAssetDescriptor; // @synthesize autoAssetDescriptor=_autoAssetDescriptor;
@property(readonly, retain, nonatomic) NSString *assetTargetBuildVersion; // @synthesize assetTargetBuildVersion=_assetTargetBuildVersion;
@property(readonly, retain, nonatomic) NSString *assetTargetOSVersion; // @synthesize assetTargetOSVersion=_assetTargetOSVersion;
@property(readonly, retain, nonatomic) MAAutoAssetProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(readonly, retain, nonatomic) NSError *finishedError; // @synthesize finishedError=_finishedError;
@property(readonly, nonatomic) _Bool catalogFromLookupCache; // @synthesize catalogFromLookupCache=_catalogFromLookupCache;
@property(readonly, retain, nonatomic) NSDictionary *autoAssetCatalog; // @synthesize autoAssetCatalog=_autoAssetCatalog;
@property(readonly, retain, nonatomic) NSString *autoAssetJobID; // @synthesize autoAssetJobID=_autoAssetJobID;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *autoAssetSelector; // @synthesize autoAssetSelector=_autoAssetSelector;
@property(retain, nonatomic) MADAutoAssetClientRequest *clientRequest; // @synthesize clientRequest=_clientRequest;
@property(readonly, nonatomic) long long paramType; // @synthesize paramType=_paramType;
@property(retain, nonatomic) NSString *paramSafeSummary; // @synthesize paramSafeSummary=_paramSafeSummary;
- (void)updateSafeSummary;	// IMP=0x00000000001be0fa
- (id)summary;	// IMP=0x00000000001be0e8
- (id)_summary;	// IMP=0x00000000001bdd55
- (id)description;	// IMP=0x00000000001bdd43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001bda6f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bd63a
- (id)initWithParamType:(long long)arg1 withSafeSummary:(id)arg2 withClientRequest:(id)arg3 withAutoAssetSelector:(id)arg4 withAutoAssetJobID:(id)arg5 withAutoAssetCatalog:(id)arg6 whereCatalogFromLookupCache:(_Bool)arg7 withFinishedError:(id)arg8 withDownloadProgress:(id)arg9 withAssetTargetOSVersion:(id)arg10 withAssetTargetBuildVersion:(id)arg11 withAutoAssetDescriptor:(id)arg12 withControlInformation:(id)arg13;	// IMP=0x00000000001bd3bd
- (id)initWithDescriptor:(id)arg1 withControlInformation:(id)arg2;	// IMP=0x00000000001bd372
- (id)initWithAssetTargetOSVersion:(id)arg1 withAssetTargetBuildVersion:(id)arg2 withControlInformation:(id)arg3;	// IMP=0x00000000001bd31e
- (id)initWithSelector:(id)arg1 withControlInformation:(id)arg2;	// IMP=0x00000000001bd2cf
- (id)initForCurrentJobID:(id)arg1 withProgress:(id)arg2;	// IMP=0x00000000001bd27d
- (id)initForFinishedJobID:(id)arg1 withCatalog:(id)arg2 whereCatalogFromLookupCache:(_Bool)arg3 withError:(id)arg4;	// IMP=0x00000000001bd22c
- (id)initForFinishedJobID:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001bd1da
- (id)initWithClientRequest:(id)arg1 withControlInformation:(id)arg2;	// IMP=0x00000000001bd18b
- (id)initWithControlInformation:(id)arg1;	// IMP=0x00000000001bd13c
- (id)initWithSafeSummary:(id)arg1;	// IMP=0x00000000001bd0f8

@end

