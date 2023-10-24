//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;
@protocol HMDFetchedSettingsDriverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDFetchedSettingsDriverPreferences : NSObject
{
    id <HMDFetchedSettingsDriverDelegate> delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
    NSString *_prefix;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000842bc5
- (void).cxx_destruct;	// IMP=0x0000000000842b89
@property __weak id <HMDFetchedSettingsDriverDelegate> delegate; // @synthesize delegate;
- (void)updateSettingWithKeyPath:(id)arg1 primaryUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000842a29
- (void)languageValueListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000842a12
- (void)updateSettingWithKeyPath:(id)arg1 languageSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008428d9
- (void)updateSettingWithKeyPath:(id)arg1 integerSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008422d9
- (void)updateSettingWithKeyPath:(id)arg1 boolSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000841dfe
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000841241
- (void)startWithKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000084122f
- (id)initWithQueue:(id)arg1 userDefaults:(id)arg2 prefix:(id)arg3 defaultValues:(id)arg4;	// IMP=0x0000000000840b51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
