//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBCloudDatabase, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaManager : NSObject
{
    HMBCloudDatabase *_cloudDatabase;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000035161d
+ (id)_quotaErrorFromServerError:(id)arg1;	// IMP=0x00100000003514b6
+ (id)_quotaServerErrorFromServerError:(id)arg1;	// IMP=0x0010000000351346
+ (id)defaultManager;	// IMP=0x0010000000351316
- (void).cxx_destruct;	// IMP=0x0000000000350ebb
@property(readonly) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
- (id)logIdentifier;	// IMP=0x0000000000350e2d
- (id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x0000000000350cce
- (id)_addCodeOperationWithFunctionName:(id)arg1 request:(id)arg2 responseClass:(Class)arg3;	// IMP=0x0000000000350bce
- (id)disableCloudStorageForZoneWithName:(id)arg1;	// IMP=0x00000000003509ad
- (id)enableCloudStorageForZoneWithName:(id)arg1;	// IMP=0x00000000003507f7
- (id)initWithDatabase:(id)arg1;	// IMP=0x0000000000350764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

