//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, PBSystemUIServiceSystemState;

@interface PBSystemUIServiceConduit : NSObject
{
    MISSING_TYPE *_systemState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000226e84
@property(readonly, nonatomic) PBSystemUIServiceSystemState *systemState; // @synthesize systemState=_systemState;
- (void)setSiriPresentationVisibility:(long long)arg1;	// IMP=0x0010000000226e0e
- (void)setSplitViewVisibility:(long long)arg1;	// IMP=0x0010000000226da2
- (void)setPlaybackControlsState:(long long)arg1;	// IMP=0x0010000000226d36
- (void)updateSystemStateUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000226bef
- (id)init;	// IMP=0x0010000000226b99

@end

