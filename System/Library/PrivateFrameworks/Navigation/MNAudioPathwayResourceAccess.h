//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNObserverHashTable, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNAudioPathwayResourceAccess : NSObject
{
    MNObserverHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;	// 16 = 0x10
    _Bool _enableHFPUse;	// 24 = 0x18
    _Bool _wantsVolumeControl;	// 25 = 0x19
    NSDictionary *_hfpRoute;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f6eba
@property(retain, nonatomic) NSDictionary *hfpRoute; // @synthesize hfpRoute=_hfpRoute;
@property(nonatomic) _Bool wantsVolumeControl; // @synthesize wantsVolumeControl=_wantsVolumeControl;
@property(nonatomic) _Bool enableHFPUse; // @synthesize enableHFPUse=_enableHFPUse;
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000f6e86
- (void)addObserver:(id)arg1;	// IMP=0x00000000000f6e80
- (id)initWithHFPEnabled:(_Bool)arg1;	// IMP=0x00000000000f6e32

@end

