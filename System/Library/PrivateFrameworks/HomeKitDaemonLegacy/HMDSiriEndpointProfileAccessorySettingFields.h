//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileAccessorySettingFields : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_serializeFields;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000045408f
+ (id)languageValueKeyPaths;	// IMP=0x0010000000454082
+ (id)numberValueKeyPaths;	// IMP=0x0010000000454075
+ (id)booleanValueKeyPaths;	// IMP=0x0010000000454068
+ (id)keyPaths;	// IMP=0x0010000000453f80
+ (id)fieldKeyForKeyPath:(id)arg1;	// IMP=0x0010000000453f5d
- (void).cxx_destruct;	// IMP=0x0000000000453f4a
- (id)attributeDescriptions;	// IMP=0x0000000000453e7e
- (id)serializeFields;	// IMP=0x0000000000453e1e
- (void)setLanguageValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000453adb
- (void)setNumberValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000453903
- (void)setBoolValue:(_Bool)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000004536e6
- (id)init;	// IMP=0x000000000045367b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
