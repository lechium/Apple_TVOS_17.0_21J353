//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, TVSSWaveformController, TVSSWaveformData;

@protocol TVSSWaveformControllerObserver <NSObject>
- (void)waveformController:(TVSSWaveformController *)arg1 remoteRouteSymbolNameDidChange:(NSString *)arg2;
- (void)waveformController:(TVSSWaveformController *)arg1 waveformDidChange:(TVSSWaveformData *)arg2;
- (void)waveformControllerTrackDidChange:(TVSSWaveformController *)arg1;
@end

