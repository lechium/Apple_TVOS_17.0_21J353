//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TVSettingsUserAccessFacade
{
    _Bool _enabledOnDevice;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000f986a
@property(nonatomic, getter=isEnabledOnDevice) _Bool enabledOnDevice; // @synthesize enabledOnDevice=_enabledOnDevice;
- (_Bool)setAllowAccess:(_Bool)arg1 forInfo:(id)arg2;	// IMP=0x00100000000f9f41
- (id)fetchInfoMapping;	// IMP=0x00100000000f9a1e

@end

