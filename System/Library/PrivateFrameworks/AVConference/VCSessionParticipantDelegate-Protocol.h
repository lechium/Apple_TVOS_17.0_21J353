//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCServerDelegate-Protocol.h>

@class NSError, NSString, VCSessionParticipant;

@protocol VCSessionParticipantDelegate <VCServerDelegate>
- (void)vcSessionParticipantDidStopReacting:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 reactionDidStart:(NSString *)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 oneToOneModeDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didDetectError:(NSError *)arg2;
- (void)vcSessionParticipantDidRemoteMediaStallTimeout:(VCSessionParticipant *)arg1 duration:(double)arg2;
- (void)vcSessionParticipantFetchStreamGroupState:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeReceivingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeSendingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didRequestVideoRedundancy:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 streamGroupID:(unsigned int)arg3 firType:(int)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(NSString *)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoPausedDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioPausedDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 mediaMixingDidChangeForMediaType:(unsigned int)arg2 mixingMediaType:(unsigned int)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteScreenEnabledDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
@end

