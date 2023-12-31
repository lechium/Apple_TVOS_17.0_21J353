//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LoggingSupport/OSLogTermDumper.h>

@class NSNumberFormatter, NSString, NSURL, OSLogStatsUUIDCache;

@interface OSLogStatsDumper : OSLogTermDumper
{
    _Bool _upgrade;	// 32 = 0x20
    NSURL *_archive;	// 40 = 0x28
    unsigned long long _imageCount;	// 48 = 0x30
    NSNumberFormatter *_nfmt;	// 56 = 0x38
    NSString *_sortKey;	// 64 = 0x40
    long long _outputStyle;	// 72 = 0x48
    OSLogStatsUUIDCache *_uuidcache;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000a273
@property(retain, nonatomic) OSLogStatsUUIDCache *uuidcache; // @synthesize uuidcache=_uuidcache;
@property(nonatomic) long long outputStyle; // @synthesize outputStyle=_outputStyle;
@property(retain, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(retain, nonatomic) NSNumberFormatter *nfmt; // @synthesize nfmt=_nfmt;
@property(nonatomic) unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property(nonatomic) _Bool upgrade; // @synthesize upgrade=_upgrade;
@property(retain, nonatomic) NSURL *archive; // @synthesize archive=_archive;
- (void)printJSONCollectionOverview:(id)arg1 size:(unsigned long long)arg2;	// IMP=0x0010000000009031
- (void)printOverview;	// IMP=0x0010000000008d2f
- (void)printOverviewByFile;	// IMP=0x00100000000085ce
- (void)printOverviewByBook;	// IMP=0x001000000000837a
- (void)printOverviewForProcess:(id)arg1;	// IMP=0x0010000000007fe4
- (void)printOverviewForSender:(id)arg1;	// IMP=0x0010000000007c4e
- (void)printOverviewForPredicate:(id)arg1;	// IMP=0x001000000000791e
- (void)printCollection:(id)arg1 sortedByKey:(id)arg2 limitCount:(unsigned long long)arg3;	// IMP=0x0010000000007766
- (void)printCollectionHeader:(id)arg1;	// IMP=0x0010000000006c9e
- (void)printTopImages:(id)arg1 parent:(id)arg2 sortedByKey:(id)arg3 limitCount:(unsigned long long)arg4;	// IMP=0x00100000000069b7
- (void)printTopSubsystems:(id)arg1 parent:(id)arg2 sortedByKey:(id)arg3 limitCount:(unsigned long long)arg4;	// IMP=0x0010000000006788
- (void)printTopCategories:(id)arg1 parent:(id)arg2 sortedByKey:(id)arg3 limitCount:(unsigned long long)arg4;	// IMP=0x0010000000006559
- (void)printStatsLine:(id)arg1 parent:(id)arg2 UUID:(const char *)arg3 description:(id)arg4;	// IMP=0x0010000000006287
- (void)printStatsHeader:(const char *)arg1 withUUID:(_Bool)arg2;	// IMP=0x00100000000060f2
- (void)puts:(const char *)arg1 rightAlignedLength:(unsigned long long)arg2;	// IMP=0x001000000000609d
- (const char *)formatGrouped:(unsigned long long)arg1 width:(int)arg2;	// IMP=0x0010000000005ff8
- (const char *)formatGrouped:(unsigned long long)arg1;	// IMP=0x0010000000005fe9
- (void)printKey:(const char *)arg1;	// IMP=0x0010000000005ec9
- (void)printHeader:(const char *)arg1;	// IMP=0x0010000000005e58
- (id)initWithArchive:(id)arg1 fd:(int)arg2 upgradeArchive:(_Bool)arg3 colorMode:(unsigned char)arg4;	// IMP=0x0010000000005d1e

@end

