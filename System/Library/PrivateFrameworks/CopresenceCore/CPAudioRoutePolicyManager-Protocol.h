//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/NSObject-Protocol.h>

@class OS_dispatch_queue, TURoute;
@protocol CPAudioPolicyStateObserver;

@protocol CPAudioRoutePolicyManager <NSObject>
@property(readonly, nonatomic) TURoute *pickedRoute;
@property(readonly, nonatomic) _Bool sharePlaySupported;
- (void)addObserver:(id <CPAudioPolicyStateObserver>)arg1 withQueue:(OS_dispatch_queue *)arg2;
- (void)switchToSpeakerRouteIfNecessary;
@end

