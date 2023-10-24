//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNAudioManager, NSString;

@protocol MNAudioManagerObserver <NSObject>
- (void)audioManager:(MNAudioManager *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)audioManager:(MNAudioManager *)arg1 didActivateAudioSession:(_Bool)arg2;
@end

