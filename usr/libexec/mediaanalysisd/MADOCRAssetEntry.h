//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSURL, PHAsset, PHAssetResource;

@interface MADOCRAssetEntry : NSObject
{
    int _status;	// 8 = 0x8
    int _version;	// 12 = 0xc
    PHAsset *_asset;	// 16 = 0x10
    unsigned long long _previousStatus;	// 24 = 0x18
    unsigned long long _previousAttempts;	// 32 = 0x20
    NSDate *_lastAttemptDate;	// 40 = 0x28
    NSDate *_currentAttemptDate;	// 48 = 0x30
    NSData *_ocrData;	// 56 = 0x38
    NSData *_mrcData;	// 64 = 0x40
    PHAssetResource *_downloadResource;	// 72 = 0x48
    NSURL *_downloadURL;	// 80 = 0x50
}

+ (id)entryWithAsset:(id)arg1 previousStatus:(unsigned long long)arg2 previousAttempts:(unsigned long long)arg3 andLastAttemptDate:(id)arg4;	// IMP=0x004000000006062c
- (void).cxx_destruct;	// IMP=0x0020000000060799
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) PHAssetResource *downloadResource; // @synthesize downloadResource=_downloadResource;
@property(retain, nonatomic) NSData *mrcData; // @synthesize mrcData=_mrcData;
@property(retain, nonatomic) NSData *ocrData; // @synthesize ocrData=_ocrData;
@property(nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSDate *currentAttemptDate; // @synthesize currentAttemptDate=_currentAttemptDate;
@property(readonly, nonatomic) NSDate *lastAttemptDate; // @synthesize lastAttemptDate=_lastAttemptDate;
@property(readonly, nonatomic) unsigned long long previousAttempts; // @synthesize previousAttempts=_previousAttempts;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long previousStatus; // @synthesize previousStatus=_previousStatus;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 previousStatus:(unsigned long long)arg2 previousAttempts:(unsigned long long)arg3 andLastAttemptDate:(id)arg4;	// IMP=0x0010000000060520

@end

