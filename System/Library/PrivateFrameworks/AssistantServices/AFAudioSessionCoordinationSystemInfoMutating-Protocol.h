//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol AFAudioSessionCoordinationSystemInfoMutating <NSObject>
- (void)setMediaRemoteRouteIdentifier:(NSString *)arg1;
- (void)setMediaRemoteGroupIdentifier:(NSString *)arg1;
- (void)setHomeKitMediaSystemIdentifier:(NSUUID *)arg1;
- (void)setHomeKitRoomName:(NSString *)arg1;
- (void)setIsSupportedAndEnabled:(_Bool)arg1;
@end

