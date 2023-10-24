//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOArrivalRegion, NSTimer;
@protocol MNArrivalRegionTimerDelegate;

__attribute__((visibility("hidden")))
@interface MNArrivalRegionTimer : NSObject
{
    GEOArrivalRegion *_arrivalRegion;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    id <MNArrivalRegionTimerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020519
@property(nonatomic) __weak id <MNArrivalRegionTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateForLocation:(id)arg1;	// IMP=0x000000000002019e
- (void)dealloc;	// IMP=0x000000000002015c
- (id)initWithArrivalRegion:(id)arg1;	// IMP=0x00000000000200a3
- (id)init;	// IMP=0x0000000000020079

@end

