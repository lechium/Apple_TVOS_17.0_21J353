//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDBackgroundOperationManagerCurrentDeviceStateDataSource : NSObject
{
}

- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 label:(id)arg3;	// IMP=0x0000000000a66ede
- (id)currentDate;	// IMP=0x0000000000a66ec5
@property(readonly, nonatomic) _Bool isDesignatedFMFDevice;
@property(readonly, nonatomic) _Bool isHomePod;
@property(readonly, nonatomic) _Bool isAppleTV;
@property(readonly, nonatomic) _Bool isiOSDevice;

@end
