//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingTransform : NSObject
{
}

+ (id)mergeWithGroupMetadata:(id)arg1 group:(id)arg2;	// IMP=0x008000000036f3f2
+ (void)changeAccessorySettingType:(id)arg1 home:(id)arg2;	// IMP=0x008000000036f0ae
+ (id)modelsForChangedConstraints:(id)arg1 fromSetting:(id)arg2;	// IMP=0x008000000036eeaa
+ (id)modelForSetting:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;	// IMP=0x008000000036ecb9
+ (id)modelForSetting:(id)arg1;	// IMP=0x008000000036ec12
+ (id)modelsForSetting:(id)arg1;	// IMP=0x008000000036e967
+ (id)modelForGroup:(id)arg1;	// IMP=0x008000000036e882
+ (id)modelsForSettingDiff:(id)arg1 fromSetting:(id)arg2;	// IMP=0x008000000036d78c
+ (id)modelsForGroupDiff:(id)arg1 fromGroup:(id)arg2;	// IMP=0x008000000036d207
+ (id)modelsForGroup:(id)arg1;	// IMP=0x008000000036cea7

@end

