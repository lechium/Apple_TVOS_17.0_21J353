//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDCompositeSettingValue, HMFVersion, NSArray, NSString;

@protocol HMDCompositeSettingsController <NSObject>
@property(readonly) _Bool configured;
- (void)updateSettingsForKeyPaths:(NSArray *)arg1 callerVersion:(HMFVersion *)arg2 completion:(void (^)(HMDCompositeSettingOperationResult *))arg3;
- (void)updateSettingForKeyPath:(NSString *)arg1 value:(HMDCompositeSettingValue *)arg2 callerVersion:(HMFVersion *)arg3 completion:(void (^)(HMDCompositeSettingOperationResult *))arg4;
- (void)fetchSettingsForKeyPaths:(NSArray *)arg1 callerVersion:(HMFVersion *)arg2 callerPrivilege:(unsigned long long)arg3 completion:(void (^)(NSArray *))arg4;
- (void)fetchSettingForKeyPath:(NSString *)arg1 callerVersion:(HMFVersion *)arg2 callerPrivilege:(unsigned long long)arg3 completion:(void (^)(HMDCompositeSettingOperationResult *))arg4;
@end

