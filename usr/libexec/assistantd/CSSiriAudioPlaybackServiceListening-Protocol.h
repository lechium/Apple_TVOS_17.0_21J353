//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFAudioPlaybackRequest, CSSiriAudioPlaybackService, MISSING_TYPE, NSError;

@protocol CSSiriAudioPlaybackServiceListening <NSObject>
- (void)audioPlaybackService:(CSSiriAudioPlaybackService *)arg1 didStopRequest:(AFAudioPlaybackRequest *)arg2 error:(NSError *)arg3;
- (MISSING_TYPE *)audioPlaybackService:didStartRequest: /* Error: Ran out of types for this method. */;
- (void)audioPlaybackService:(CSSiriAudioPlaybackService *)arg1 willStartRequest:(AFAudioPlaybackRequest *)arg2;
@end
