//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLTilesManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000009d354a
+ (id)getSilo;	// IMP=0x00100000009d3336
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d331d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009d32c0
- (_Bool)syncgetListTilesDirectory:(id)arg1 type:(int)arg2 time:(double)arg3;	// IMP=0x00200000009d9b92
- (_Bool)syncgetTransitMacAddressesAmong:(void *)arg1 nearLatitude:(double)arg2 longitude:(double)arg3 resultMacAddresses:(void *)arg4;	// IMP=0x00100000009d97c1
- (_Bool)syncgetRegionPreloadManifest:(void *)arg1;	// IMP=0x00100000009d9435
- (_Bool)syncgetAppAvailabilityForLocation:(const CDStruct_c17e8280 *)arg1 radius:(float)arg2 searchContext:(void *)arg3 availabilityList:(void *)arg4 includeRegionalApps:(_Bool)arg5;	// IMP=0x00100000009d7c31
- (_Bool)syncgetDeleteTileFile:(int)arg1 atPath:(id)arg2;	// IMP=0x00100000009d768d
- (id)syncgetTileFilePath:(int)arg1 latitude:(double)arg2 longitude:(double)arg3 isFileAccessible:(_Bool *)arg4 isTileNotExistingOnServer:(_Bool *)arg5;	// IMP=0x00100000009d75b6
- (_Bool)syncgetTileStats:(void *)arg1;	// IMP=0x00100000009d7241
- (void)enableAppTilesDownload:(_Bool)arg1;	// IMP=0x00100000009d7011
- (void)requestTileDownloadByType:(int)arg1 path:(id)arg2 details:(struct CLTileFileDownloadDetails)arg3;	// IMP=0x00100000009d6f62
- (void)requestTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4 details:(struct CLTileFileDownloadDetails)arg5;	// IMP=0x00100000009d36db
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009d3522
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d34f5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009d34cd
- (void *)adaptee;	// IMP=0x00100000009d349a
- (void)endService;	// IMP=0x00100000009d347f
- (void)beginService;	// IMP=0x00100000009d33cf
- (id)init;	// IMP=0x00100000009d3392

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
