//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSNumber;

@protocol PBSVolumeControlServerInterface
- (MISSING_TYPE *)setIsMuted:error: /* Error: Ran out of types for this method. */;
- (void)adjustRelativeVolumeLevel:(NSNumber *)arg1 error:(id *)arg2;
- (void)setAbsoluteVolumeLevel:(NSNumber *)arg1 error:(id *)arg2;
- (NSNumber *)absoluteVolumeLevel;
- (NSNumber *)volumeControlCapabilities;
@end

