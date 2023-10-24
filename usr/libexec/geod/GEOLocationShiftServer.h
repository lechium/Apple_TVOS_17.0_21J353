//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOLocationShifter;

@interface GEOLocationShiftServer : GEOServer
{
    GEOLocationShifter *_shifter;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x0020000000014563
- (void).cxx_destruct;	// IMP=0x001000000001b2c9
- (void)flushDiskCacheWithMessage:(id)arg1;	// IMP=0x001000000001b270
- (void)functionVersionWithMessage:(id)arg1;	// IMP=0x001000000001b179
- (void)isRequiredForCoordinateWithMessage:(id)arg1;	// IMP=0x001000000001af90
- (void)isEnabledWithMessage:(id)arg1;	// IMP=0x001000000001ae98
- (void)shiftCoordinateWithMessage:(id)arg1;	// IMP=0x001000000001aac6
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000001aa57
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000014570

@end

