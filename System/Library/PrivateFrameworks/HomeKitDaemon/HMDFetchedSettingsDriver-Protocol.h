//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMAccessoryInfoPrimaryUser, HMSettingBooleanValue, HMSettingIntegerValue, HMSettingLanguageValue, NSArray, NSString;
@protocol HMDFetchedSettingsDriverDelegate;

@protocol HMDFetchedSettingsDriver <NSObject>
@property __weak id <HMDFetchedSettingsDriverDelegate> delegate;
- (void)updateSettingWithKeyPath:(NSString *)arg1 primaryUserInfo:(HMAccessoryInfoPrimaryUser *)arg2 completion:(void (^)(NSError *))arg3;
- (void)languageValueListWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)updateSettingWithKeyPath:(NSString *)arg1 languageSettingValue:(HMSettingLanguageValue *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateSettingWithKeyPath:(NSString *)arg1 integerSettingValue:(HMSettingIntegerValue *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateSettingWithKeyPath:(NSString *)arg1 boolSettingValue:(HMSettingBooleanValue *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchSettingsForKeyPaths:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)startWithKeyPaths:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end
