//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDApplicationInfo;

__attribute__((visibility("hidden")))
@interface __HMDExtensionApplicationInfo
{
    HMDApplicationInfo *_hostApplicationInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006725da
- (id)hostApplicationInfo;	// IMP=0x00000000006725c4
- (_Bool)isInstalled;	// IMP=0x0000000000672577
- (id)vendorIdentifier;	// IMP=0x00000000006724cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006723ac
- (id)attributeDescriptions;	// IMP=0x000000000067228d
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000000672170

@end

