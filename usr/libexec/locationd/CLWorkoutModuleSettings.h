//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWorkoutModuleSettings : NSObject
{
    struct vector<ModuleName, std::allocator<ModuleName>> _moduleNames;	// 8 = 0x8
    struct SettingStructure _settings;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0020000000f9552f
- (void).cxx_destruct;	// IMP=0x0010000000f954f2
- (struct SettingStructure)getStructSetting:(struct WatchStartInfo)arg1;	// IMP=0x0010000000f95420
- (double)createPrivacyTimeOffset;	// IMP=0x0010000000f9539d
- (id)initWith:(void *)arg1;	// IMP=0x0010000000f94eba

@end

