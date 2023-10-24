//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, PHAsset;

@interface VCPMADQuickFaceIDAssetEntry : NSObject
{
    int _status;	// 8 = 0x8
    PHAsset *_asset;	// 16 = 0x10
    unsigned long long _previousStatus;	// 24 = 0x18
    unsigned long long _previousAttempts;	// 32 = 0x20
    NSDate *_lastAttemptDate;	// 40 = 0x28
    NSDate *_currentAttemptDate;	// 48 = 0x30
    NSArray *_detectedFaces;	// 56 = 0x38
    NSDictionary *_detectedPersons;	// 64 = 0x40
}

+ (id)entryWithAsset:(id)arg1 previousStatus:(unsigned long long)arg2 previousAttempts:(unsigned long long)arg3 andLastAttemptDate:(id)arg4;	// IMP=0x0040000000043975
- (void).cxx_destruct;	// IMP=0x0020000000043a9a
@property(retain, nonatomic) NSDictionary *detectedPersons; // @synthesize detectedPersons=_detectedPersons;
@property(retain, nonatomic) NSArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
@property(readonly, nonatomic) NSDate *currentAttemptDate; // @synthesize currentAttemptDate=_currentAttemptDate;
@property(readonly, nonatomic) NSDate *lastAttemptDate; // @synthesize lastAttemptDate=_lastAttemptDate;
@property(readonly, nonatomic) unsigned long long previousAttempts; // @synthesize previousAttempts=_previousAttempts;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long previousStatus; // @synthesize previousStatus=_previousStatus;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 previousStatus:(unsigned long long)arg2 previousAttempts:(unsigned long long)arg3 andLastAttemptDate:(id)arg4;	// IMP=0x0010000000043869

@end

