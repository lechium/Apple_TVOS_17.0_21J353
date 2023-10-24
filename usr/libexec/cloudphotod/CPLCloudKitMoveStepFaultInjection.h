//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCloudKitMoveStepFaultInjection : NSObject
{
    long long _moveStep;	// 8 = 0x8
    double _workItemDelay;	// 16 = 0x10
}

+ (id)moveStepFaultInjectionWithMoveStep:(long long)arg1 workItemDelay:(double)arg2;	// IMP=0x00400000000be5cb
@property(readonly, nonatomic) double workItemDelay; // @synthesize workItemDelay=_workItemDelay;
@property(readonly, nonatomic) long long moveStep; // @synthesize moveStep=_moveStep;
- (id)initWithMoveStep:(long long)arg1 workItemDelay:(double)arg2;	// IMP=0x00100000000be604

@end

