//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVAudioRemoteInputDevice, AVAudioRemoteInputPlugin;

@protocol AVAudioRemoteInputPluginDelegate
- (void)inputPlugin:(id <AVAudioRemoteInputPlugin>)arg1 didUnpublishDevice:(id <AVAudioRemoteInputDevice>)arg2;
- (void)inputPlugin:(id <AVAudioRemoteInputPlugin>)arg1 didPublishDevice:(id <AVAudioRemoteInputDevice>)arg2;
@end

