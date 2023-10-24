//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RMModelStatusManagementClientCapabilities;

@interface RMCapabilities : NSObject
{
    RMModelStatusManagementClientCapabilities *_status;	// 8 = 0x8
    NSString *_versionHash;	// 16 = 0x10
}

+ (id)_supportedStatusClasses:(id)arg1 enrollmentType:(long long)arg2 scope:(long long)arg3 protocolType:(unsigned long long)arg4;	// IMP=0x002000000000f364
+ (id)_supportedClasses:(id)arg1 enrollmentType:(long long)arg2 scope:(long long)arg3 protocolType:(unsigned long long)arg4;	// IMP=0x001000000000f0e7
+ (id)_supportedStatusItemsForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000f025
+ (id)_supportedManagementForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000efa2
+ (id)_supportedConfigurationsForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000ef1f
+ (id)_supportedAssetsForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000ee9c
+ (id)_supportedActivationsForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000ee19
+ (id)_supportedPayloadsForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000ecb8
+ (id)_clientCapabilitiesModelForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000ebf6
+ (id)capabilitiesByCapabilitiesType;	// IMP=0x001000000000ea72
+ (_Bool)isClassItemSupported:(Class)arg1 enrollmentType:(long long)arg2 scope:(long long)arg3 protocolType:(unsigned long long)arg4;	// IMP=0x001000000000ea26
+ (id)capabilitiesForEnrollmentType:(long long)arg1 scope:(long long)arg2 protocolType:(unsigned long long)arg3;	// IMP=0x001000000000e8dd
- (void).cxx_destruct;	// IMP=0x002000000000f5f5
@property(readonly, nonatomic) NSString *versionHash; // @synthesize versionHash=_versionHash;
@property(readonly, nonatomic) RMModelStatusManagementClientCapabilities *status; // @synthesize status=_status;
- (id)initWithClientCapabilitiesModel:(id)arg1;	// IMP=0x001000000000ead7

@end

