//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManager;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerObjectLookup
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0060000000422344
- (void).cxx_destruct;	// IMP=0x0000000000422333
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)_scanAccounts;	// IMP=0x0000000000421dde
- (void)_scanCloudZones;	// IMP=0x0000000000421be3
- (void)_scanHomes;	// IMP=0x00000000004219e8
- (void)scanObjects;	// IMP=0x0000000000421923
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000421891

@end

