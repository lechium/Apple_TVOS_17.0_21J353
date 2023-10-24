//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface CLHRequestArchive : NSObject
{
    NSString *_directory;	// 8 = 0x8
    unsigned int _requestCode;	// 16 = 0x10
    double _rotationInterval;	// 24 = 0x18
    double _lastRotationTime;	// 32 = 0x20
    unsigned long long _count;	// 40 = 0x28
    unsigned long long _totalCount;	// 48 = 0x30
    NSString *_secondaryPath;	// 56 = 0x38
    NSFileHandle *_secondaryFileHandle;	// 64 = 0x40
}

@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSFileHandle *secondaryFileHandle; // @synthesize secondaryFileHandle=_secondaryFileHandle;
@property(retain, nonatomic) NSString *secondaryPath; // @synthesize secondaryPath=_secondaryPath;
@property(readonly) unsigned int requestCode; // @synthesize requestCode=_requestCode;
@property(nonatomic) double rotationInterval; // @synthesize rotationInterval=_rotationInterval;
- (id)jsonObject;	// IMP=0x0010000000c255ef
- (void)eraseAllData;	// IMP=0x0010000000c254d0
- (unsigned long long)totalSecondaryPointsUnderAllSubArchives;	// IMP=0x0010000000c25190
- (id)secondaryFileURLs;	// IMP=0x0010000000c25025
- (id)pathForSecondaryData;	// IMP=0x0010000000c24ff6
- (id)pathForPrimaryData;	// IMP=0x0010000000c24fd9
- (void)updateCount;	// IMP=0x0010000000c24ea1
- (id)inactiveSubArchives;	// IMP=0x0010000000c24a41
- (_Bool)isActiveSubArchive;	// IMP=0x0010000000c24a03
- (_Bool)deleteSubArchiveIfInactive:(id)arg1;	// IMP=0x0010000000c2463b
- (void)iterateSubArchivesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c2449a
- (void)generateNewSubArchive;	// IMP=0x0010000000c2406c
- (void)iterateSecondaryData:(id)arg1 forField:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c23f85
- (id)pruneAndGetSecondaryDataOlderThan:(double)arg1;	// IMP=0x0010000000c23d73
- (void)pruneSecondaryDataOlderThan:(double)arg1;	// IMP=0x0010000000c23bde
- (id)mappedSecondaryData;	// IMP=0x0010000000c23a57
- (id)mappedSecondaryDataByDestructivelyCombiningAllSecondaryData;	// IMP=0x0010000000c238a8
- (void)writeSecondaryData:(id)arg1 toField:(unsigned int)arg2;	// IMP=0x0010000000c23645
- (void)writeSecondaryObject:(id)arg1 toField:(unsigned int)arg2;	// IMP=0x0010000000c23604
- (void)incrementCountBy:(unsigned long long)arg1;	// IMP=0x0010000000c2333f
- (_Bool)primaryDataExists;	// IMP=0x0010000000c232ee
- (id)mappedPrimaryData;	// IMP=0x0010000000c232d2
- (void)overwritePrimaryObject:(id)arg1;	// IMP=0x0010000000c2329e
- (void)overwritePrimaryData:(id)arg1;	// IMP=0x0010000000c22ad5
- (id)mappedDataByDestructivelyCombiningPrimaryAndSecondaryData;	// IMP=0x0010000000c2248e
- (unsigned int)secondaryDataSize;	// IMP=0x0010000000c222fe
- (unsigned int)primaryDataSize;	// IMP=0x0010000000c2228c
@property(readonly) unsigned long long fileCount;
@property(readonly) NSString *directory;
- (unsigned long long)totalCountIncludingAllSubArchives;	// IMP=0x0010000000c22232
@property(readonly) unsigned long long count; // @synthesize count=_count;
- (void)rotateSecondaryFile;	// IMP=0x0010000000c2204f
- (void)dealloc;	// IMP=0x0010000000c21f9b
- (id)initWithDirectory:(id)arg1 requestCode:(int)arg2 itemCountThresholdForAutoCleanUp:(int)arg3;	// IMP=0x0010000000c214a6
- (id)initWithDirectory:(id)arg1 itemCountThresholdForAutoCleanUp:(int)arg2;	// IMP=0x0010000000c2148f
- (id)initWithDirectory:(id)arg1 requestCode:(int)arg2;	// IMP=0x0010000000c21477
- (id)initWithDirectory:(id)arg1;	// IMP=0x0010000000c2145d
- (id)init;	// IMP=0x0010000000c21432
- (void)setCount:(unsigned long long)arg1;	// IMP=0x0010000000c21200

@end
