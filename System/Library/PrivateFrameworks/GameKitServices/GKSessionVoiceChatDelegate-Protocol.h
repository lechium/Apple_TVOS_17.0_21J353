//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameKitServices/GKSessionDelegate-Protocol.h>

@class NSData, NSString;

@protocol GKSessionVoiceChatDelegate <GKSessionDelegate>
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(NSString *)arg3;
- (void)session:(id)arg1 didReceiveAudioPacket:(NSData *)arg2 fromPeerID:(NSString *)arg3;
@end

