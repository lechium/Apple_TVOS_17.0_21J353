//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDCloudHomeManagerZone
{
}

+ (void)createHomeManagerZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0080000000300bac
+ (id)zoneSubscriptionName:(id)arg1;	// IMP=0x0080000000300b9f
+ (id)zoneRootRecordName;	// IMP=0x0080000000300b92
- (void)setServerChangeToken:(id)arg1;	// IMP=0x0000000000300b51
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;	// IMP=0x0000000000300b18

@end

