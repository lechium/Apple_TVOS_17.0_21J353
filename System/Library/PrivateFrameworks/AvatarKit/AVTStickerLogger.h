//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface AVTStickerLogger : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000004d4d5
- (void).cxx_destruct;	// IMP=0x000000000004d851
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)logErrorShaderModifiers:(id)arg1 cantBeRemovedFromAvatar:(id)arg2 errors:(id)arg3;	// IMP=0x000000000004d743
- (void)logRemovingShaderModifiers:(id)arg1 fromAvatar:(id)arg2 wereApplied:(_Bool)arg3;	// IMP=0x000000000004d73d
- (void)logShaderModifier:(id)arg1 notRemovedFromAvatar:(id)arg2 reason:(id)arg3;	// IMP=0x000000000004d737
- (void)logShaderModifier:(id)arg1 removedFromAvatar:(id)arg2 material:(id)arg3;	// IMP=0x000000000004d731
- (void)logShaderModifier:(id)arg1 appliedToAvatar:(id)arg2 material:(id)arg3;	// IMP=0x000000000004d72b
- (void)logCompleteExport:(id)arg1 startedAt:(double)arg2;	// IMP=0x000000000004d725
- (void)logStartExport:(id)arg1;	// IMP=0x000000000004d71f
- (void)logErrorCreatingAssetReader:(id)arg1;	// IMP=0x000000000004d6af
- (void)logErrorBuildingProp:(id)arg1;	// IMP=0x000000000004d63f
- (void)logCompleteBuildingProp:(id)arg1 startedAt:(double)arg2;	// IMP=0x000000000004d639
- (void)logStartBuildingProp:(id)arg1;	// IMP=0x000000000004d633
- (void)logCompletedApplyConfiguration:(id)arg1;	// IMP=0x000000000004d62d
- (void)logStartApplyConfiguration:(id)arg1;	// IMP=0x000000000004d627
- (void)logConfigurationNotFoundForName:(id)arg1;	// IMP=0x000000000004d5b7
- (id)init;	// IMP=0x000000000004d55a

@end

