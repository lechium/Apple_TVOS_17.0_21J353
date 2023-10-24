//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelFileAsset, NSString;

__attribute__((visibility("hidden")))
@interface MPCAssetLoadPropertiesLocalFileEvaluation : NSObject
{
    _Bool _fileMatchesRequiredFileFormat;	// 8 = 0x8
    _Bool _fileMatchesRequiredQuality;	// 9 = 0x9
    _Bool _fileIsDownloaded;	// 10 = 0xa
    _Bool _fileIsCached;	// 11 = 0xb
    _Bool _fileIsHLS;	// 12 = 0xc
    MPModelFileAsset *_fileAsset;	// 16 = 0x10
    long long _status;	// 24 = 0x18
    long long _recommendation;	// 32 = 0x20
    long long _fileAssetType;	// 40 = 0x28
    long long _expectedAssetType;	// 48 = 0x30
    long long _fileQualityType;	// 56 = 0x38
    long long _expectedQualityType;	// 64 = 0x40
    NSString *_filePath;	// 72 = 0x48
    long long _HLSContentPolicy;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001a724f
@property(nonatomic) long long HLSContentPolicy; // @synthesize HLSContentPolicy=_HLSContentPolicy;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long expectedQualityType; // @synthesize expectedQualityType=_expectedQualityType;
@property(nonatomic) long long fileQualityType; // @synthesize fileQualityType=_fileQualityType;
@property(nonatomic) long long expectedAssetType; // @synthesize expectedAssetType=_expectedAssetType;
@property(nonatomic) long long fileAssetType; // @synthesize fileAssetType=_fileAssetType;
@property(nonatomic) _Bool fileIsHLS; // @synthesize fileIsHLS=_fileIsHLS;
@property(nonatomic) _Bool fileIsCached; // @synthesize fileIsCached=_fileIsCached;
@property(nonatomic) _Bool fileIsDownloaded; // @synthesize fileIsDownloaded=_fileIsDownloaded;
@property(nonatomic) _Bool fileMatchesRequiredQuality; // @synthesize fileMatchesRequiredQuality=_fileMatchesRequiredQuality;
@property(nonatomic) _Bool fileMatchesRequiredFileFormat; // @synthesize fileMatchesRequiredFileFormat=_fileMatchesRequiredFileFormat;
@property(nonatomic) long long recommendation; // @synthesize recommendation=_recommendation;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(readonly, nonatomic) _Bool fileShouldBeUpdated;
@property(readonly, nonatomic) _Bool fileIsValid;
- (id)humanDescription;	// IMP=0x00000000001a6b00
- (id)description;	// IMP=0x00000000001a6a78
- (id)initWithFileAsset:(id)arg1;	// IMP=0x00000000001a6a05

@end

