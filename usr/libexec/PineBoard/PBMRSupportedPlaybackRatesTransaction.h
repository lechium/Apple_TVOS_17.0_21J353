//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSArray, NSObject, PBPlaybackRateList;
@protocol OS_dispatch_queue, PBMRSupportedCommandsProviding;

@interface PBMRSupportedPlaybackRatesTransaction : BSTransaction
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_supportedPlaybackRates;	// 16 = 0x10
    id <PBMRSupportedCommandsProviding> _supportedCommandsProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00100000000fb452
@property(readonly, nonatomic) __weak id <PBMRSupportedCommandsProviding> supportedCommandsProvider; // @synthesize supportedCommandsProvider=_supportedCommandsProvider;
@property(readonly, nonatomic) NSArray *supportedPlaybackRates; // @synthesize supportedPlaybackRates=_supportedPlaybackRates;
- (id)_changePlaybackRateCommandInfo;	// IMP=0x00100000000fb38f
- (void)_begin;	// IMP=0x00100000000fb290
- (id)queue;	// IMP=0x00100000000fb27a
- (id)initWithParentTransaction:(id)arg1;	// IMP=0x00100000000fb1f0
- (id)initWithQueue:(id)arg1 supportedCommandsProvider:(id)arg2;	// IMP=0x00100000000fb14e
@property(readonly, nonatomic) PBPlaybackRateList *supportedPlaybackRateList;

@end

