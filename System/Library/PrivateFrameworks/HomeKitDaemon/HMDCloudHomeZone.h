//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDCloudHomeZone
{
    _Bool _sharedHome;	// 72 = 0x48
}

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x006000000036fd5a
+ (id)zoneSubscriptionName:(id)arg1;	// IMP=0x006000000036fd3e
+ (id)zoneSharedRootRecordName;	// IMP=0x006000000036fd31
+ (id)zoneRootRecordName;	// IMP=0x006000000036fd24
@property(readonly, nonatomic, getter=isSharedHome) _Bool sharedHome; // @synthesize sharedHome=_sharedHome;
- (void)setServerChangeToken:(id)arg1;	// IMP=0x000000000036fcd3
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;	// IMP=0x000000000036fc9a
- (id)description;	// IMP=0x000000000036fc07

@end

